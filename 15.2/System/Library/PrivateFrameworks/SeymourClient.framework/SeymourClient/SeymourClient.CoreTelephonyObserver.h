@interface SeymourClient.CoreTelephonyObserver : NSObject <SMCCoreTelephonyClientDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isCellularDataEnabled;
    void /* unknown type, empty encoding */ isRoaming;
    void /* unknown type, empty encoding */ cellularData;
    void /* unknown type, empty encoding */ coreTelephonyClient;
    void /* unknown type, empty encoding */ queue;
}

- (void)cellularDataStateChangedWithCellularDataEnabled:(BOOL)a0;
- (void)cellularDataStateChangedWithRoaming:(BOOL)a0;
- (void)cellularDataStateChanged;
- (void).cxx_destruct;
- (id)init;

@end
