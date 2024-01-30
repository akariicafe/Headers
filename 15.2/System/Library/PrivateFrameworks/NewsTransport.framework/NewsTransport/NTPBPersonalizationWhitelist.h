@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)defaultTagsType;
+ (Class)optionalTagsType;
+ (Class)disabledPortraitTagsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addDefaultTags:(id)a0;
- (void)addOptionalTags:(id)a0;
- (void)addDisabledPortraitTags:(id)a0;
- (void)clearDefaultTags;
- (unsigned long long)defaultTagsCount;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (void)clearOptionalTags;
- (unsigned long long)optionalTagsCount;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (void)clearDisabledPortraitTags;
- (unsigned long long)disabledPortraitTagsCount;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;

@end
