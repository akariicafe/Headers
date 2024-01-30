@class NSUUID, HRProfile, NSArray, NSPredicate, WDMedicalRecordPagingContext, HKMultiTypeSampleIterator, HKMedicalUserDomainConcept, HKConcept, NSMutableArray, NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface WDMedicalRecordDisplayItemProvider : NSObject <WDMedicalRecordDaySummaryDelegate>

@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKConcept *concept;
@property (retain, nonatomic) HKMedicalUserDomainConcept *userDomainConcept;
@property (copy, nonatomic) NSArray *preloadedRecords;
@property (retain, nonatomic) NSMutableArray *medicalRecordGroups;
@property (retain, nonatomic) NSMutableArray *dateLessGroups;
@property (retain, nonatomic) NSArray *pendingMedicalRecordGroups;
@property (retain, nonatomic) NSArray *pendingDateLessGroups;
@property (copy, nonatomic) NSArray *sampleTypes;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) NSPredicate *accountsPredicate;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) NSUUID *targetUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueryQueue;
@property (retain, nonatomic) WDMedicalRecordPagingContext *pagingContext;
@property (retain, nonatomic) HKMultiTypeSampleIterator *iterator;
@property (nonatomic) BOOL shouldCancelDataCollection;
@property (nonatomic) long long displayItemOptions;
@property (readonly, copy, nonatomic) NSDictionary *additionalPredicates;
@property (retain, nonatomic) NSPredicate *filter;
@property (copy, nonatomic) NSDictionary *filterPredicatesByType;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) long long numOfRemovedRecords;
@property (nonatomic) BOOL shouldClearPagingCacheOnNextReload;

+ (id)allSupportedRecordCategories;
+ (id)allSupportedSampleTypes;
+ (id)supportedRecordCategoriesByCategoryType;
+ (id)unknownRecordCategory;

- (void)reload;
- (id)removedRecords;
- (void).cxx_destruct;
- (void)_queue_reload;
- (long long)numberOfGroups;
- (void)daySummaryHasDisplayItemUpdate:(id)a0;
- (void)stopCollectingData;
- (id)indexPathForRecordId:(id)a0;
- (id)initWithProfile:(id)a0 userDomainConcept:(id)a1 preloadedRecords:(id)a2 displayItemOptions:(long long)a3 sampleTypes:(id)a4 filter:(id)a5 additionalPredicates:(id)a6 sortDescriptors:(id)a7;
- (id)initWithProfile:(id)a0 concept:(id)a1 preloadedRecords:(id)a2 displayItemOptions:(long long)a3 sampleTypes:(id)a4 filter:(id)a5 additionalPredicates:(id)a6 sortDescriptors:(id)a7;
- (void)startCollectingDataUntilRecordWithUUID:(id)a0 withUpdateHandler:(id /* block */)a1;
- (void)requestDataOfNextPage;
- (id)displayItemForIndexPath:(id)a0;
- (long long)numberOfDisplayItemsForGroupAtIndex:(long long)a0;
- (id)titleForGroupAtIndex:(long long)a0;
- (id)subtitleForGroupAtIndex:(long long)a0;
- (void)setSampleTypes:(id)a0 predicatesPerType:(id)a1 accountsPredicate:(id)a2;
- (void)_commitPendingGroupsAndCallUpdateHandlerBypassGroupChangeDetermination:(BOOL)a0;
- (void)_queue_queryForNextBatchOfData;
- (id)_displayItemGroupAtIndex:(long long)a0;
- (void)_queue_resetPagingCache;
- (void)_queue_resetPagingInformation;
- (id)_queue_synthesizedPredicatesForMedicalType:(id)a0;
- (void)_queue_setupIterator;
- (void)_queue_processAccumulatedRecordsForPage:(id)a0;
- (void)_displayItemGroupsForSummaryOfRecords:(id)a0 displayRemovedRecords:(BOOL)a1 style:(long long)a2 completion:(id /* block */)a3;
- (id)_sortedDisplayItemGroupWithDateDisplay:(id)a0 sourceDaySummaryMapping:(id)a1;
- (id)initWithProfile:(id)a0 displayItemOptions:(long long)a1 sampleTypes:(id)a2 filter:(id)a3 additionalPredicates:(id)a4 sortDescriptors:(id)a5;

@end
