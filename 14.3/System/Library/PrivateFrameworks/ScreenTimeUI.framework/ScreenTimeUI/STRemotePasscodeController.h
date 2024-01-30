@interface STRemotePasscodeController : NSObject

@property (class, readonly, nonatomic, getter=isRestrictionsPasscodeSet) BOOL restrictionsPasscodeSet;

+ (id)_xpcConnection;
+ (void)activateRemotePINUI;

@end
