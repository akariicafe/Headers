@class NSString, NSMutableArray;

@interface FCCKPLocale : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasRegionCode;
@property (retain, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSMutableArray *enabledKeyboards;
@property (readonly, nonatomic) BOOL hasActiveKeyboard;
@property (retain, nonatomic) NSString *activeKeyboard;

+ (Class)enabledKeyboardsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)enabledKeyboardsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEnabledKeyboards:(id)a0;
- (unsigned long long)enabledKeyboardsCount;
- (void)clearEnabledKeyboards;

@end
