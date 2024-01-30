@class NSString, DMTimer, DMPluginFaulter;

@interface DMMigrationPluginWrapperWatchdog : NSObject

@property (copy, nonatomic) NSString *pluginBundleIdentifier;
@property (copy, nonatomic) NSString *backupDeviceUUID;
@property (retain, nonatomic) DMPluginFaulter *faulter;
@property (nonatomic) unsigned long long secondsBeforeNextFault;
@property (nonatomic) unsigned long long secondsOfLeeway;
@property (retain, nonatomic) DMTimer *timer;
@property (nonatomic) unsigned long long fireCount;

+ (id)_messageStringWithPluginBundleIdentifier:(id)a0 durationDescription:(id)a1 backupDeviceUUID:(id)a2;

- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (void)_migrationPluginDuration10Minutes;
- (void)_migrationPluginDuration20Minutes;
- (void)_migrationPluginDuration40Minutes;
- (void)_migrationPluginDuration5Minutes;
- (id)initWithPluginBundleIdentifier:(id)a0 backupDeviceUUID:(id)a1;

@end
