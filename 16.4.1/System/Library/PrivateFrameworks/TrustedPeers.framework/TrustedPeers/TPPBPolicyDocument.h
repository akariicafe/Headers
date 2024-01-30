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

+ (Class)categoriesByViewType;
+ (Class)inheritedExcludedViewsType;
+ (Class)introducersByCategoryType;
+ (Class)keyViewMappingType;
+ (Class)modelToCategoryType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)redactionsType;
+ (Class)userControllableViewsType;

- (void)clearKeyViewMappings;
- (void)addUserControllableViews:(id)a0;
- (void)addCategoriesByView:(id)a0;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (void)clearUserControllableViews;
- (void)clearPriorityViews;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)addModelToCategory:(id)a0;
- (void)addPiggybackViews:(id)a0;
- (void)addRedactions:(id)a0;
- (void)clearRedactions;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelToCategorysCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (void)clearInheritedExcludedViews;
- (void)clearIntroducersByCategorys;
- (void)clearCategoriesByViews;
- (void)addIntroducersByCategory:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)categoriesByViewsCount;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)piggybackViewsCount;
- (unsigned long long)redactionsCount;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (void)clearPiggybackViews;
- (unsigned long long)hash;
- (void)addKeyViewMapping:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)userControllableViewsCount;
- (void)clearModelToCategorys;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)introducersByCategorysCount;
- (unsigned long long)keyViewMappingsCount;
- (id)description;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)priorityViewsCount;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (void).cxx_destruct;
- (void)addPriorityViews:(id)a0;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;

@end
