@class NSString;

@interface AMSUIDMobileGestalt : NSObject

@property (class, readonly) NSString *deviceClass;
@property (class, readonly) BOOL hasHEVCDecoding;
@property (class, readonly) BOOL hasSystemTelephonyOfAnyKind;
@property (class, readonly) BOOL hasVenice;
@property (class, readonly) BOOL isTouchIDSupported;
@property (class, readonly) NSString *productType;
@property (class, readonly) BOOL wapiCapability;
@property (class, readonly) NSString *activePairedSystemVersion;

+ (BOOL)hasCapabilities:(id)a0;

@end
