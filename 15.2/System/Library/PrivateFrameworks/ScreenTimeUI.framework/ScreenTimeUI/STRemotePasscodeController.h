@interface STRemotePasscodeController : NSObject

@property (class, readonly, nonatomic, getter=isRestrictionsPasscodeSet) BOOL restrictionsPasscodeSet;

+ (void)activateRemotePINUI;
+ (id)_xpcConnection;

@end
