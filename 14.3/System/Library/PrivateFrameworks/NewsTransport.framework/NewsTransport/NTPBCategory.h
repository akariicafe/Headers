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

+ (Class)recommendedTopicsType;
+ (Class)recommendedChannelsType;
+ (Class)categoryHierarchyType;
+ (Class)curatedTagIdsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addRecommendedTopics:(id)a0;
- (void)addRecommendedChannels:(id)a0;
- (void)addCategoryHierarchy:(id)a0;
- (void)addCuratedTagIds:(id)a0;
- (void)clearRecommendedTopics;
- (unsigned long long)recommendedTopicsCount;
- (id)recommendedTopicsAtIndex:(unsigned long long)a0;
- (void)clearRecommendedChannels;
- (unsigned long long)recommendedChannelsCount;
- (id)recommendedChannelsAtIndex:(unsigned long long)a0;
- (void)clearCategoryHierarchys;
- (unsigned long long)categoryHierarchysCount;
- (id)categoryHierarchyAtIndex:(unsigned long long)a0;
- (void)clearCuratedTagIds;
- (unsigned long long)curatedTagIdsCount;
- (id)curatedTagIdsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
