@interface SiriFindMy.FindDeviceAndPlaySoundIntentHandler : INExtension <FindDeviceAndPlaySoundIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ deviceLockStateProvider;
    void /* unknown type, empty encoding */ findDeviceSession;
}

- (id)handlerForIntent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleFindDeviceAndPlaySound:(id)a0 completion:(id /* block */)a1;
- (void)confirmFindDeviceAndPlaySound:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForFindDeviceAndPlaySound:(id)a0 withCompletion:(id /* block */)a1;

@end
