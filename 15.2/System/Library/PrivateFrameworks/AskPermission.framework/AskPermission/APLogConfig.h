@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedUIServiceConfig;
+ (id)sharedSettingsConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedPluginConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
