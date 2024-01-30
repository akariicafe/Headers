@class NSBundle;

@interface RMBundle : NSObject

@property (class, readonly) NSBundle *remoteManagementBundle;
@property (class, readonly) BOOL isRunningAsDaemon;

@end
