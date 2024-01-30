@class NSMutableDictionary, NSMutableSet;
@protocol MPUCompletionQueryDataSourceDelegate;

@interface MPUCompletionQueryDataSource : MPUQueryDataSource {
    BOOL _hasAutomaticallyLoadedCompletions;
    NSMutableDictionary *_tokens;
    NSMutableDictionary *_completions;
    NSMutableSet *_overlayedSectionEntityPIDs;
    NSMutableDictionary *_statuses;
    NSMutableDictionary *_variants;
}

@property (nonatomic) BOOL shouldShowCompletions;
@property (nonatomic) BOOL shouldAutomaticallyLoadCompletions;
@property (readonly, nonatomic) BOOL shouldLoadCompletionArtwork;
@property (weak, nonatomic) id<MPUCompletionQueryDataSourceDelegate> completionDelegate;

- (void).cxx_destruct;
- (void)_willInvalidateWithContext:(id)a0;
- (void)_didInvalidateWithContext:(id)a0;
- (id)sectionEntityAtIndex:(unsigned long long)a0;
- (void)loadCompletionOfferings;
- (void)loadCompletionOfferingForSectionAtIndex:(unsigned long long)a0;
- (long long)completionOfferStatusForSectionAtIndex:(long long)a0;
- (id)sectionEntityWithoutOverlayAtIndex:(unsigned long long)a0;
- (id)completionOfferingForSectionAtIndex:(unsigned long long)a0;
- (void)_setCompletion:(id)a0 forSectionAtIndex:(long long)a1;
- (BOOL)hasCompletionOfferForSectionAtIndex:(unsigned long long)a0;
- (BOOL)isShowingCompletionOverlayForSectionAtIndex:(unsigned long long)a0;
- (long long)_tokenForSectionAtIndex:(long long)a0;
- (void)cancelCompletionOfferingWithToken:(unsigned long long)a0;
- (void)_setToken:(unsigned long long)a0 forSectionAtIndex:(long long)a1;
- (long long)_pidForSectionAtIndex:(long long)a0;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)a0;
- (void)overlayCompletionForSectionAtIndex:(unsigned long long)a0;
- (void)removeAllCompletionOverlays;
- (unsigned long long)indexOfSectionForCompletionOffering:(id)a0;
- (void)setCompletionOfferStatus:(long long)a0 forSectionAtIndex:(long long)a1;
- (BOOL)hasVariantsForSectionAtIndex:(long long)a0;
- (long long)variantForSectionAtIndex:(long long)a0;
- (void)setVariant:(long long)a0 forSectionAtIndex:(long long)a1;

@end
