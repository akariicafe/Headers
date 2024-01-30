@class NSString, NSData;

@interface LTSchemaTask : PBCodable

@property (copy, nonatomic) NSString *translationTask;
@property (nonatomic) BOOL hasTranslationTask;
@property (copy, nonatomic) NSString *sourceLanguage;
@property (nonatomic) BOOL hasSourceLanguage;
@property (copy, nonatomic) NSString *targetLanguage;
@property (nonatomic) BOOL hasTargetLanguage;
@property (copy, nonatomic) NSString *deviceOS;
@property (nonatomic) BOOL hasDeviceOS;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL hasOsVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
