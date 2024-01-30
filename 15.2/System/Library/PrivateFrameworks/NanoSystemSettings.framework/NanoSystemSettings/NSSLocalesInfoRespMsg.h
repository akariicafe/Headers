@class NSString, NSMutableArray;

@interface NSSLocalesInfoRespMsg : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *systemLanguages;
@property (retain, nonatomic) NSMutableArray *localeIdentifiers;
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableArray *supportedCalendars;
@property (retain, nonatomic) NSMutableArray *defaultCalendars;
@property (retain, nonatomic) NSMutableArray *numberingSystems;

+ (Class)localeIdentifiersType;
+ (Class)systemLanguagesType;
+ (Class)supportedCalendarsType;
+ (Class)defaultCalendarsType;
+ (Class)numberingSystemsType;

- (void)addLocaleIdentifiers:(id)a0;
- (unsigned long long)localeIdentifiersCount;
- (void)clearLocaleIdentifiers;
- (id)localeIdentifiersAtIndex:(unsigned long long)a0;
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
- (void)addSystemLanguages:(id)a0;
- (void)addSupportedCalendars:(id)a0;
- (void)addDefaultCalendars:(id)a0;
- (void)addNumberingSystems:(id)a0;
- (unsigned long long)systemLanguagesCount;
- (void)clearSystemLanguages;
- (id)systemLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedCalendarsCount;
- (void)clearSupportedCalendars;
- (id)supportedCalendarsAtIndex:(unsigned long long)a0;
- (unsigned long long)defaultCalendarsCount;
- (void)clearDefaultCalendars;
- (id)defaultCalendarsAtIndex:(unsigned long long)a0;
- (unsigned long long)numberingSystemsCount;
- (void)clearNumberingSystems;
- (id)numberingSystemsAtIndex:(unsigned long long)a0;

@end
