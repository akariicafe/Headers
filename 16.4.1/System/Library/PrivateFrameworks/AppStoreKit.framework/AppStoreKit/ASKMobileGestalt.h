@class NSString;

@interface ASKMobileGestalt : NSObject

@property (class, readonly) BOOL hasSystemTelephonyOfAnyKind;
@property (class, readonly) BOOL hasVenice;
@property (class, readonly) BOOL wapiCapability;
@property (class, readonly) NSString *deviceClass;
@property (class, readonly) NSString *productType;
@property (class, readonly) BOOL hasHEVCDecoding;
@property (class, readonly) BOOL isCharonSupported;
@property (class, readonly) BOOL isMandrakeSupported;
@property (class, readonly) BOOL isStandaloneWatch;
@property (class, readonly) BOOL isAppleSiliconMac;
@property (class, readonly) NSString *activePairedSystemVersion;
@property (class, readonly) struct CGSize { double x0; double x1; } mainScreenSize;
@property (class, readonly) double mainScreenScale;

+ (BOOL)hasCapabilities:(id)a0;

@end
