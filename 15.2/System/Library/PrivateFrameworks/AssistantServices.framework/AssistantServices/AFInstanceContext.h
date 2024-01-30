@class NSString, AFInstanceInfo;

@interface AFInstanceContext : NSObject

@property (readonly, copy, nonatomic) NSString *preferencesSubdomain;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *audioDeviceIdentifier;
@property (readonly, nonatomic) BOOL supportsAudioPowerUpdate;
@property (readonly, nonatomic) BOOL supportsProxyGroupPlayer;
@property (readonly, nonatomic) BOOL supportsTelephony;
@property (readonly, nonatomic) AFInstanceInfo *info;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL isCurrent;

+ (id)currentContext;
+ (id)effectiveMachServiceName:(id)a0;
+ (id)defaultContext;

- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;

@end
