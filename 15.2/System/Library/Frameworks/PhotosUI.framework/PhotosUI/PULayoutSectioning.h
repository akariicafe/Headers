@protocol PULayoutSectioningDelegate;

@interface PULayoutSectioning : NSObject {
    BOOL _invalidatingSampling;
    BOOL _invalidatingSections;
}

@property (nonatomic) id<PULayoutSectioningDelegate> delegate;
@property (retain, nonatomic) PULayoutSectioning *baseSectioning;

- (id)description;
- (void).cxx_destruct;
- (long long)visualSectionForRealSection:(long long)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (long long)mainRealSectionForVisualSection:(long long)a0;
- (void)enumerateRealSectionsForVisualSection:(long long)a0 usingBlock:(id /* block */)a1;
- (long long)numberOfVisualItemsInVisualSection:(long long)a0;
- (void)_baseSectioningDidInvalidateSampling:(id)a0;
- (void)invalidateSampling;
- (BOOL)hasSomeSampling;
- (void)_baseSectioningDidInvalidateSections:(id)a0;
- (void)invalidateSections;
- (long long)numberOfRealItemsInVisualSection:(long long)a0;
- (struct PUSimpleIndexPath { long long x0; long long x1; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { long long x0; long long x1; })a0;
- (struct PUSimpleIndexPath { long long x0; long long x1; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { long long x0; long long x1; })a0 isMainItem:(BOOL *)a1;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)a0 inVisualItemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)a0;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { long long x0; long long x1; })a0;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(BOOL)a0 hasIncorrectSampling:(BOOL *)a1 hasInvisibleItemsInBaseSectioning:(BOOL *)a2;
- (id)sectioningDescription;
- (id)sectioningHashHasIncorrectSampling:(BOOL *)a0 hasInvisibleItemsInBaseSectioning:(BOOL *)a1;
- (id)sectioningHash;

@end
