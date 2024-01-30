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

- (void)resetContentsAuthorizationWithCompletion:(id /* block */)a0;
- (void)requestControlAuthorizationWithCompletion:(id /* block */)a0;
- (void)requestContentsAuthorizationWithCompletion:(id /* block */)a0;
- (id)contentsAuthorizationStatus;
- (BOOL)suspended;
- (id)internalDevices;
- (void)start;
- (id)init;
- (id)controlAuthorizationStatus;
- (void)dealloc;
- (void)resetControlAuthorizationWithCompletion:(id /* block */)a0;
- (void)stop;

@end
