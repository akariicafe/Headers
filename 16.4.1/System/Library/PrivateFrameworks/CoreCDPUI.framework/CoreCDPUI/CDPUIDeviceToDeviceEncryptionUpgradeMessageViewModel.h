@interface CDPUIDeviceToDeviceEncryptionUpgradeMessageViewModel : CDPUIDeviceToDeviceEncryptionMessagingViewModel

- (id)message;
- (id)title;
- (unsigned long long)_localSecretType;
- (id)_stringWithFeatureIfNeeded:(id)a0;
- (id)_stringWithFeatureSubstituted:(id)a0;
- (id)cancelTitle;
- (id)continueTitle;

@end
