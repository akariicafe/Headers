@interface BiometricKitUI : NSObject {
    BOOL _triggeredfromApplePay;
}

+ (id)sharedInstance;

- (id)getEnrollUIViewController:(int)a0 bundleName:(id)a1;
- (void)setTriggeredFromApplePay;
- (void)invalidateApplePayTrigger;
- (BOOL)triggeredFromApplePay;

@end
