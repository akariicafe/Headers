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
@property (retain, nonatomic) NSMutableArray *priorityViews;
@property (retain, nonatomic) NSMutableArray *inheritedExcludedViews;

+ (Class)modelToCategoryType;
+ (Class)categoriesByViewType;
+ (Class)introducersByCategoryType;
+ (Class)redactionsType;
+ (Class)keyViewMappingType;
+ (Class)userControllableViewsType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)inheritedExcludedViewsType;

- (id)redactionsAtIndex:(unsigned long long)a0;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (void)addKeyViewMapping:(id)a0;
- (void)clearRedactions;
- (void)addUserControllableViews:(id)a0;
- (void)clearInheritedExcludedViews;
- (unsigned long long)inheritedExcludedViewsCount;
- (void)clearModelToCategorys;
- (void)addPriorityViews:(id)a0;
- (void)addPiggybackViews:(id)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearIntroducersByCategorys;
- (id)description;
- (void)clearPriorityViews;
- (unsigned long long)userControllableViewsCount;
- (unsigned long long)introducersByCategorysCount;
- (void)addRedactions:(id)a0;
- (void)clearKeyViewMappings;
- (void)mergeFrom:(id)a0;
- (unsigned long long)keyViewMappingsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (void)clearCategoriesByViews;
- (unsigned long long)redactionsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCategoriesByView:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearUserControllableViews;
- (unsigned long long)hash;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (void)clearPiggybackViews;
- (unsigned long long)priorityViewsCount;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)modelToCategorysCount;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)addIntroducersByCategory:(id)a0;
- (unsigned long long)categoriesByViewsCount;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (void)addModelToCategory:(id)a0;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)piggybackViewsCount;

@end
