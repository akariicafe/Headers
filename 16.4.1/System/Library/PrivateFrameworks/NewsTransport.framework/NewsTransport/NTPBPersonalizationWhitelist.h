@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)defaultTagsType;
+ (Class)optionalTagsType;
+ (Class)disabledPortraitTagsType;

- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (void)addDefaultTags:(id)a0;
- (void)addOptionalTags:(id)a0;
- (void)clearDefaultTags;
- (unsigned long long)optionalTagsCount;
- (unsigned long long)defaultTagsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addDisabledPortraitTags:(id)a0;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (void)clearOptionalTags;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearDisabledPortraitTags;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)disabledPortraitTagsCount;
- (void).cxx_destruct;

@end
