@class NSArray, NSSet;

@interface SGQuickResponsesRepliesNested : SGQuickResponsesReplies

@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) NSArray *semanticClasses;
@property (readonly, nonatomic) NSArray *styleGroups;
@property (readonly, nonatomic) NSArray *replyTexts;
@property (readonly, nonatomic) NSArray *selectedPseudocounts;
@property (readonly, nonatomic) NSArray *semanticClassReplyTextStrings;
@property (readonly, nonatomic) NSArray *semanticClassSelectedPseudocounts;
@property (readonly, nonatomic) NSArray *semanticClassParent;
@property (readonly, nonatomic) NSArray *styleGroupParent;
@property (readonly, nonatomic) NSArray *replyTextParent;
@property (readonly, nonatomic) NSArray *categoryModels;
@property (readonly, nonatomic) NSArray *categorySemanticClasses;
@property (readonly, nonatomic) NSArray *categoryStyleGroups;
@property (readonly, nonatomic) NSArray *semanticClassStyleGroups;
@property (readonly, nonatomic) NSArray *semanticClassReplyTexts;
@property (readonly, nonatomic) NSArray *styleGroupReplyTexts;
@property (readonly, nonatomic) NSSet *normalizedReplyTextsSet;

+ (id)flattenedArraysFromNestedArray:(id)a0;
+ (id)selectedPseudocountsFromModels:(id)a0;
+ (id)modelSemanticClassesFromModels:(id)a0;
+ (id)categoryModelsFromModels:(id)a0;
+ (id)indexedArraysFromNestedArray:(id)a0;
+ (BOOL)isZeroBasedAndContiguous:(id)a0;
+ (id)nestedArrayFromFlatArray:(id)a0 nestedIndexes:(id)a1;
+ (id)nestedArrayFromModels:(id)a0;
+ (id)parentArraysFromNestedArray:(id)a0 models:(id)a1;
+ (id)replyModelsForArray:(id)a0;
+ (id)subclassesFromClasses:(id)a0 subclassArray:(id)a1;

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)replyClassCount;
- (unsigned long long)maxDistinctReplies;
- (unsigned long long)modelCount;
- (unsigned long long)replyCountForIndex:(unsigned long long)a0;
- (unsigned long long)replyTextCount;
- (id)replyTextForIndex:(unsigned long long)a0 position:(unsigned long long)a1;
- (id)replyTextsForIndex:(unsigned long long)a0;

@end
