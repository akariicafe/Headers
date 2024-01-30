@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (retain, nonatomic) NSMutableArray *modelToCategorys;
@property (retain, nonatomic) NSMutableArray *categoriesByViews;
@property (retain, nonatomic) NSMutableArray *introducersByCategorys;
@property (retain, nonatomic) NSMutableArray *redactions;
@property (retain, nonatomic) NSMutableArray *keyViewMappings;
@property (retain, nonatomic) NSMutableArray *userControllableViews;
@property (retain, nonatomic) NSMutableArray *piggybackViews;

+ (Class)modelToCategoryType;
+ (Class)categoriesByViewType;
+ (Class)introducersByCategoryType;
+ (Class)redactionsType;
+ (Class)keyViewMappingType;
+ (Class)userControllableViewsType;
+ (Class)piggybackViewsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearModelToCategorys;
- (void)addModelToCategory:(id)a0;
- (unsigned long long)modelToCategorysCount;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (void)clearCategoriesByViews;
- (void)addCategoriesByView:(id)a0;
- (unsigned long long)categoriesByViewsCount;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)clearIntroducersByCategorys;
- (void)addIntroducersByCategory:(id)a0;
- (unsigned long long)introducersByCategorysCount;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (void)clearRedactions;
- (void)addRedactions:(id)a0;
- (unsigned long long)redactionsCount;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (void)clearKeyViewMappings;
- (void)addKeyViewMapping:(id)a0;
- (unsigned long long)keyViewMappingsCount;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (void)clearUserControllableViews;
- (void)addUserControllableViews:(id)a0;
- (unsigned long long)userControllableViewsCount;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (void)clearPiggybackViews;
- (void)addPiggybackViews:(id)a0;
- (unsigned long long)piggybackViewsCount;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;

@end
