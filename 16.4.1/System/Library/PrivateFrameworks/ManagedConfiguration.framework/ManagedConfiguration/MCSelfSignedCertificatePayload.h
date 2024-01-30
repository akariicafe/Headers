@class NSString, NSArray;

@interface MCSelfSignedCertificatePayload : MCCertificatePayload {
    BOOL _isHardwareBound;
}

@property (readonly, retain, nonatomic) NSString *keyType;
@property (readonly, nonatomic) unsigned long long keySize;
@property (readonly, nonatomic) unsigned int keyUsage;
@property (readonly, retain, nonatomic) NSArray *extendedKeyUsage;
@property (readonly, nonatomic) unsigned long long lifetime;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (BOOL)isRoot;
- (void).cxx_destruct;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (BOOL)isHardwareBound;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)persistentResourceID;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)validateExtendedKeyUsage:(id)a0;

@end
