@class NSData, NSString, NSMutableArray;

@interface PBBProtoOfflineTerms : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLicense;
@property (retain, nonatomic) NSData *license;
@property (readonly, nonatomic) BOOL hasMultiterms;
@property (retain, nonatomic) NSData *multiterms;
@property (readonly, nonatomic) BOOL hasWarranty;
@property (retain, nonatomic) NSData *warranty;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSMutableArray *appleLanguages;

+ (Class)appleLanguagesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAppleLanguages:(id)a0;
- (unsigned long long)appleLanguagesCount;
- (void)clearAppleLanguages;
- (id)appleLanguagesAtIndex:(unsigned long long)a0;

@end
