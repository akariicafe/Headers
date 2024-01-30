@class NSString;

@interface ICDeviceSupport : NSObject

@property (class, readonly, nonatomic) BOOL deviceIsMac;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } notesDeviceDrawingSize;
@property (class, readonly, nonatomic) BOOL deviceSupportsPencil;
@property (class, readonly, nonatomic) BOOL deviceSupportsFirstGenPencil;
@property (class, readonly, nonatomic) BOOL deviceSupportsSystemPaper;
@property (class, readonly, nonatomic) BOOL deviceIsIPad;
@property (class, readonly, nonatomic) BOOL deviceIsSimulator;
@property (class, readonly, nonatomic) NSString *deviceName;
@property (class, readonly, nonatomic) BOOL isRunningUnitTests;
@property (class, readonly, nonatomic) BOOL isRunningDuoTests;
@property (class, readonly, nonatomic) BOOL isRunningInApp;
@property (class, readonly, nonatomic) NSString *productName;
@property (class, readonly, nonatomic) NSString *productVersion;
@property (class, readonly, nonatomic) NSString *productBuildVersion;
@property (class, readonly, nonatomic) BOOL isBiometricsAvailable;
@property (class, readonly, nonatomic) BOOL isBiometricsEnrolled;
@property (class, readonly, nonatomic) BOOL isTouchIDAvailable;
@property (class, readonly, nonatomic) BOOL isTouchIDEnrolled;
@property (class, readonly, nonatomic) BOOL isTouchIDLockedOut;
@property (class, readonly, nonatomic) BOOL isFaceIDAvailable;
@property (class, readonly, nonatomic) BOOL isFaceIDEnrolled;
@property (class, readonly, nonatomic) BOOL hasPasscode;

+ (long long)evaluateBiometricsCachedPolicyState:(id)a0 outCurrentPolicyState:(id *)a1;
+ (id)evaluatedBiometricsContextWithError:(id *)a0;
+ (id)notesProductType;

@end
