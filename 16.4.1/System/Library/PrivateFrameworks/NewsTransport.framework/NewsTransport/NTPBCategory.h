@class NSString, NSMutableArray;

@interface NTPBCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasEntityId;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSMutableArray *recommendedTopics;
@property (retain, nonatomic) NSMutableArray *recommendedChannels;
@property (retain, nonatomic) NSMutableArray *categoryHierarchys;
@property (retain, nonatomic) NSMutableArray *curatedTagIds;

+ (Class)categoryHierarchyType;
+ (Class)curatedTagIdsType;
+ (Class)recommendedChannelsType;
+ (Class)recommendedTopicsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addCategoryHierarchy:(id)a0;
- (void)addCuratedTagIds:(id)a0;
- (void)addRecommendedChannels:(id)a0;
- (void)addRecommendedTopics:(id)a0;
- (id)categoryHierarchyAtIndex:(unsigned long long)a0;
- (unsigned long long)categoryHierarchysCount;
- (void)clearCategoryHierarchys;
- (void)clearCuratedTagIds;
- (void)clearRecommendedChannels;
- (void)clearRecommendedTopics;
- (id)curatedTagIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)curatedTagIdsCount;
- (id)recommendedChannelsAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendedChannelsCount;
- (id)recommendedTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendedTopicsCount;

@end
