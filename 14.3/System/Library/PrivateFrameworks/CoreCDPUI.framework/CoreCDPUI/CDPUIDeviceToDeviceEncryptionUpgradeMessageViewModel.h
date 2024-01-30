@interface CDPUIDeviceToDeviceEncryptionUpgradeMessageViewModel : CDPUIDeviceToDeviceEncryptionMessagingViewModel

- (id)message;
- (id)title;
- (id)cancelTitle;
- (unsigned long long)_localSecretType;
- (id)continueTitle;
- (id)_stringWithFeatureIfNeeded:(id)a0;
- (id)_stringWithFeatureSubstituted:(id)a0;

@end
