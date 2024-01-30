@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (BOOL)isCurrent;
- (BOOL)supportsProxyGroupPlayer;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (BOOL)isDefault;
- (id)description;
- (id)info;
- (id)audioDeviceIdentifier;
- (id)mediaRouteIdentifier;
- (void).cxx_destruct;
- (id)init;
- (BOOL)supportsTelephony;
- (id)preferencesSubdomain;
- (BOOL)supportsAudioPowerUpdate;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;

@end
