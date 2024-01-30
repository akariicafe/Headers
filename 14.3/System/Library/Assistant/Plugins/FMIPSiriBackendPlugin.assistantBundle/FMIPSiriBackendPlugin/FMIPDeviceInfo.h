@interface FMIPDeviceInfo : NSObject

@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isCurrentlyAuthenticated) BOOL currentlyAuthenticated;

@end
