@interface SiriFindMy.FindDeviceAndPlaySoundIntentHandler : INExtension <FindDeviceAndPlaySoundIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ deviceLockStateProvider;
    void /* unknown type, empty encoding */ findDeviceSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmFindDeviceAndPlaySound:(id)a0 completion:(id /* block */)a1;
- (void)handleFindDeviceAndPlaySound:(id)a0 completion:(id /* block */)a1;
- (id)handlerForIntent:(id)a0;
- (void)resolveDevicesForFindDeviceAndPlaySound:(id)a0 withCompletion:(id /* block */)a1;

@end
