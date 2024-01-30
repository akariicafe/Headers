@class UICollectionViewLayout, NSArray, NSDictionary, NSString, NSMutableDictionary;
@protocol _UICollectionViewUpdateTranslating;

@interface _UICollectionViewAnimationContext : NSObject <_UICollectionViewAnimationContext> {
    NSArray *_updates;
    NSMutableDictionary *_appearingAttributesDict;
    NSMutableDictionary *_disappearingAttributesDict;
}

@property (readonly, nonatomic) id<_UICollectionViewUpdateTranslating> dataSourceTranslator;
@property (readonly, nonatomic) NSArray *updates;
@property (readonly, nonatomic) UICollectionViewLayout *layout;
@property (retain, nonatomic) NSDictionary *appearingAnimations;
@property (retain, nonatomic) NSDictionary *disappearingAnimations;
@property (retain, nonatomic) NSDictionary *animationsForOnScreenViews;
@property (retain, nonatomic) NSArray *previouslyVisibleItemIndexPaths;
@property (retain, nonatomic) NSArray *currentlyVisibleItemIndexPaths;
@property (copy, nonatomic) NSArray *appearingAttributes;
@property (copy, nonatomic) NSArray *disappearingAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (long long)finalSectionCount;
- (id)initWithDataSourceTranslator:(id)a0 updates:(id)a1 layout:(id)a2;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (long long)initialSectionCount;
- (void).cxx_destruct;

@end
