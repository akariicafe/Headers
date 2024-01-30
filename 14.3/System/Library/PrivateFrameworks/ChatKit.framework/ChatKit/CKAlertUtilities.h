@protocol CKAlertUtilitiesProtocol;

@interface CKAlertUtilities : NSObject

@property (weak, nonatomic) id<CKAlertUtilitiesProtocol> delegate;

+ (struct __CFDictionary { } *)_copyCTPhoneNumberSetting;
+ (struct __CFString { } *)_grabCTSIMStatus;
+ (long long)missingAlertTypeToNotify;

- (void).cxx_destruct;
- (void)_displayMissingInformationAlert:(long long)a0;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_showNetworkPrefs:(long long)a0;
- (void)checkMissingCarrierSetting;

@end
