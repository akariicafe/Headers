@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject

@property id delegate;
@property (getter=isBrowsing) BOOL browsing;
@property (getter=isSuspended) BOOL suspended;
@property (retain) NSMutableArray *internalDevices;

- (void)dealloc;

@end
