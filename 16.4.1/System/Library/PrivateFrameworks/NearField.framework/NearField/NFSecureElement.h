@class NSString, NSNumber, NFHardwareSecureElementInfo;

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo *_info;
    BOOL _isDirty;
}

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *systemOSSerialNumber;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) BOOL isProductionSigned;
@property (readonly) BOOL isInRestrictedMode;
@property (readonly) unsigned long long OSVersion;
@property (readonly) unsigned long long fullOSVersion;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) unsigned int supportedTechnologies;
@property (readonly) BOOL available;

+ (id)icefallSecureElement;
+ (id)embeddedSecureElementWithError:(id *)a0;
+ (unsigned int)supportedTechnologies;
+ (id)cachedEmbeddedSecureElementSerialNumber:(id *)a0;
+ (id)embeddedSecureElement;

- (id)manifestQueryBlob;
- (void)_setIsInRestrictedMode:(BOOL)a0;
- (void)_updateSecureElementInfo:(id)a0;
- (id)info;
- (id)identifier;
- (id)_initWithInfo:(id)a0;
- (unsigned int)hwType;
- (void)_markDirty;
- (BOOL)isSeshatAvailabledInRestrictedMode;
- (void)_updateIfDirty;
- (void).cxx_destruct;
- (void)_setIsInRestrictedPerformanceMode:(BOOL)a0;

@end
