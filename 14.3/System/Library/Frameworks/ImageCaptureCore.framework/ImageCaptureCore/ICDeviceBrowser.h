@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject {
    id _privateData;
}

@property (nonatomic) NSArray *devices;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property id<ICDeviceBrowserDelegate> delegate;
@property (readonly, getter=isBrowsing) BOOL browsing;
@property unsigned long long browsedDeviceTypeMask;

- (id)init;
- (id)internalDevices;
- (void)dealloc;
- (void)stop;
- (void)requestControlAuthorizationWithCompletion:(id /* block */)a0;
- (BOOL)suspended;
- (id)contentsAuthorizationStatus;
- (void)start;
- (void)requestContentsAuthorizationWithCompletion:(id /* block */)a0;
- (id)controlAuthorizationStatus;

@end
