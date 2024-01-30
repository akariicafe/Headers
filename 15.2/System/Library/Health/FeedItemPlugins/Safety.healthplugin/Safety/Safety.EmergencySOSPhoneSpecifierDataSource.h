@interface Safety.EmergencySOSPhoneSpecifierDataSource : NSObject <CoreTelephonyClientSubscriberDelegate> {
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ presentationContext;
    void /* unknown type, empty encoding */ isSettingUpdatedLocally;
    void /* unknown type, empty encoding */ isAutoCallForceDisabled;
    void /* unknown type, empty encoding */ coreTelephonyClient;
    void /* unknown type, empty encoding */ countdownSoundSpecifiers;
}

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getCallWithHoldValue;
- (void)setCallWithHoldWithValue:(id)a0;
- (id)getCallWithPressesValue;
- (void)setCallWithPressesWithValue:(id)a0;
- (id)getCountdownSoundValue;
- (void)setCountdownSoundWithValue:(id)a0;

@end
