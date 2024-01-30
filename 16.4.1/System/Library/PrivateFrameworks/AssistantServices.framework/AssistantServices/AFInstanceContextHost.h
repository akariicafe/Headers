@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (BOOL)isDefault;
- (BOOL)isCurrent;
- (BOOL)supportsTelephony;
- (id)info;
- (id)audioDeviceIdentifier;
- (BOOL)supportsAudioPowerUpdate;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (BOOL)supportsProxyGroupPlayer;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)init;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)mediaRouteIdentifier;
- (id)description;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)preferencesSubdomain;

@end
