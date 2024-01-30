@class PXSharedLibraryParticipantDataSourceManager, NSArray, PXSharedLibraryParticipantDataSource, UIImage, NSDate, PXSharedLibraryRule, NSString;
@protocol PXSharedLibrary, PXSharedLibrarySourceLibraryInfo;

@interface PXSharedLibraryAssistantViewModel : PXObservable <PXSectionedDataSourceManagerObserver> {
    BOOL _performingInitialChanges;
    struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } _cachedShareCounts;
    id /* block */ _shareCountsCompletionHandler;
}

@property (nonatomic) long long shouldShowPeopleState;
@property (retain, nonatomic) NSDate *suggestedStartDate;
@property (readonly, nonatomic) BOOL hasChangedUserInputValues;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long autoSharePolicy;
@property (readonly, nonatomic) BOOL autoShareEnabled;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSArray *personUUIDs;
@property (readonly, copy, nonatomic) UIImage *participantsImage;
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSourceManager *participantDataSourceManager;
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSource *participantDataSource;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) id<PXSharedLibrarySourceLibraryInfo> sourceLibraryInfo;
@property (readonly, nonatomic) NSArray *assetLocalIdentifiers;
@property (readonly, nonatomic) long long selectedRuleType;
@property (readonly, nonatomic) BOOL isCancelingAssistant;
@property (readonly, copy, nonatomic) NSArray *infosWithBothPeopleAndParticipants;
@property (readonly, nonatomic) BOOL previewIsOutdated;
@property (readonly, nonatomic) PXSharedLibraryRule *sharedLibraryRule;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } shareCounts;
@property (readonly, nonatomic) NSString *localizedParticipantList;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shareCountChangeDescriptors;
+ (unsigned long long)suggestedStartDateChangeDescriptors;

- (void)setStartDate:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)performInitialChanges:(id /* block */)a0;
- (void)setMode:(long long)a0;
- (id)init;
- (void)setSharedLibrary:(id)a0;
- (void).cxx_destruct;
- (void)setAutoSharePolicy:(long long)a0;
- (void)setPersonUUIDs:(id)a0;
- (void)_recalculateShareCountsIfNeeded;
- (void)_didChangePreviewRelatedProperty;
- (void)_didChangeShareCountRelatedProperty;
- (void)_didChangeSuggestedStartDateRelatedProperty;
- (void)_recalculateCustomShareCountsWithCompletion:(id /* block */)a0;
- (void)_recalculateEverythingShareCountsWithCompletion:(id /* block */)a0;
- (void)_recalculateManualSelectionShareCountsWithCompletion:(id /* block */)a0;
- (void)_recalculateSuggestedStartDateIfNeeded;
- (void)_setCachedShareCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)localizedSelectedPeopleWithAdditionalPeopleCount:(long long *)a0;
- (void)performChanges:(id /* block */)a0 shareCountsCompletionHandler:(id /* block */)a1;
- (void)setAssetLocalIdentifiers:(id)a0;
- (void)setAutoShareEnabled:(BOOL)a0;
- (void)setInfosWithBothPeopleAndParticipants:(id)a0;
- (void)setIsCancelingAssistant:(BOOL)a0;
- (void)setParticipantDataSource:(id)a0;
- (void)setParticipantsImage:(id)a0;
- (void)setSelectedRuleType:(long long)a0;
- (void)setSourceLibraryInfo:(id)a0;

@end
