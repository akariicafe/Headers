@interface _ASDevice : NSObject

@property (class, readonly) BOOL isPad;
@property (class, readonly) int deviceClass;
@property (class, readonly) BOOL isBiometricAuthenticationAvailable;
@property (class, readonly) BOOL shouldRequireLocalAuthenticationForPasswords;
@property (class, readonly) BOOL shouldRequireLocalAuthenticationForPlatformCredentials;
@property (class, readonly) long long biometryType;
@property (class, readonly) BOOL isCABLEClient;

+ (long long)_localAuthenticationBiometricsAvailability;

@end
