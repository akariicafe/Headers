@class NSString, NSArray, NSData, NSDictionary;

@interface MCSCEPPayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSString *URLString;
@property (readonly, retain, nonatomic) NSString *CAInstanceName;
@property (readonly, retain, nonatomic) NSData *CAFingerprint;
@property (readonly, retain, nonatomic) NSArray *CACaps;
@property (readonly, retain, nonatomic) NSString *challenge;
@property (readonly, retain, nonatomic) NSArray *subject;
@property (readonly, nonatomic) unsigned long long keySize;
@property (readonly, nonatomic) int usageFlags;
@property (readonly, retain, nonatomic) NSDictionary *subjectAltName;
@property (readonly, nonatomic) unsigned long long retries;
@property (readonly, nonatomic) unsigned long long retryDelay;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (BOOL)isRoot;
- (void).cxx_destruct;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
