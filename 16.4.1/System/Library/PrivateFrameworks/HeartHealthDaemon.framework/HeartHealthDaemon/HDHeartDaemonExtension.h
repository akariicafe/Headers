@class NSString, NSUserDefaults;
@protocol HDHealthDaemon;

@interface HDHeartDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler, HDHealthDaemonExtension> {
    id<HDHealthDaemon> _healthDaemon;
    NSUserDefaults *_heartNotificationsUserDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
