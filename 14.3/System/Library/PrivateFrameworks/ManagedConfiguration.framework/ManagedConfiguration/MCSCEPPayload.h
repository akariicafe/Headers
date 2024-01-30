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

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (BOOL)isRoot;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)isIdentity;

@end
