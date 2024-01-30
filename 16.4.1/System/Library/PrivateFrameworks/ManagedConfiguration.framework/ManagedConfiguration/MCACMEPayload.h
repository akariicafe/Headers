@class NSString, NSArray, NSDictionary;

@interface MCACMEPayload : MCCertificatePayload {
    BOOL _isHardwareBound;
}

@property (readonly, retain, nonatomic) NSString *directoryURLString;
@property (readonly, retain, nonatomic) NSString *clientIdentifier;
@property (readonly, retain, nonatomic) NSString *keyType;
@property (readonly, nonatomic) unsigned long long keySize;
@property (readonly, retain, nonatomic) NSArray *subject;
@property (readonly, retain, nonatomic) NSDictionary *subjectAltName;
@property (readonly, nonatomic) unsigned int usageFlags;
@property (readonly, retain, nonatomic) NSArray *extendedKeyUsage;
@property (readonly, nonatomic) BOOL attest;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (BOOL)isRoot;
- (void).cxx_destruct;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (BOOL)isHardwareBound;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;

@end
