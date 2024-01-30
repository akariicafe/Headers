@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL shouldLog;

+ (id)sharedFrameworkConfig;
+ (id)sharedDaemonConfig;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedDaemonConfigOversize;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
