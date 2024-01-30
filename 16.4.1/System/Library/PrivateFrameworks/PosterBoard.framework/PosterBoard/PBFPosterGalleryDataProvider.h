@class NSOrderedSet, NSMutableDictionary, NSMutableOrderedSet, NSString, NSHashTable;
@protocol PBFComplicationSnapshotProviding, PBFPosterSnapshotProviding;

@interface PBFPosterGalleryDataProvider : NSObject <NSCopying, NSMutableCopying, PBFPosterPreviewGenerator> {
    NSHashTable *_observers;
    long long _transactionsCount;
    long long _changeCount;
}

@property (retain, nonatomic) NSMutableOrderedSet *orderedSectionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToSectionType;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToItems;
@property (retain, nonatomic) NSMutableDictionary *posterPreviewForPosterUniqueIdentifier;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToLocalizedTitle;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToLocalizedSubtitle;
@property (retain, nonatomic) id<PBFPosterSnapshotProviding> snapshotProvider;
@property (retain, nonatomic) id<PBFComplicationSnapshotProviding> complicationSnapshotProvider;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)demoPreviewProvider;

- (id)sectionIdentifierForIndex:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObserver:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (id)itemsForSectionWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyObserversDidUpdate;
- (void)_decrementTransactionCount:(BOOL)a0;
- (void)_incrementTransactionCount:(BOOL)a0;
- (void)_markChangeDidOccur;
- (void)_notifyObserversWillUpdate;
- (id)buildSnapshot;
- (void)fetchComplicationPreviewImagesForPreview:(id)a0 complicationSnapshotReceivedHandler:(id /* block */)a1 errorHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchSnapshotForPosterPreview:(id)a0 completion:(id /* block */)a1;
- (id)localizedSubtitleForSectionWithIdentifier:(id)a0;
- (id)localizedTitleForSectionWithIdentifier:(id)a0;
- (unsigned long long)numberOfItemsInSectionWithIdentifier:(id)a0;
- (id)posterPreviewsForPath:(id)a0;
- (id)preparedComplicationPreviewImagesForPreview:(id)a0;
- (id)preparedSnapshotForPosterPreview:(id)a0;
- (id)previewForPreviewUniqueIdentifier:(id)a0;
- (unsigned long long)sectionIndexForIdentifier:(id)a0;
- (BOOL)sectionShowsDescriptionLabel:(id)a0;
- (BOOL)sectionShowsTitleLabel:(id)a0;
- (long long)sectionTypeForSectionWithIdentifier:(id)a0;

@end
