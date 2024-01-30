@class NSDateFormatter, NSMutableDictionary, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, NCNotificationListPersistentStateManagerDelegate;

@interface NCNotificationListPersistentStateManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<NCNotificationListPersistentStateManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *storedPersistentStateRepresentation;
@property (retain, nonatomic) NSDate *storedPersistentSummaryMigrationTime;
@property (retain, nonatomic) NSMutableDictionary *storedPersistentMigrationTimes;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDictionary *cachedListRepresentation;
@property (retain, nonatomic) NSDictionary *cachedListRepresentationForThrottledWrite;
@property (nonatomic, getter=hasLoadedStoredPersistentState) BOOL loadedStoredPersistentState;
@property (nonatomic, getter=isFileWritingThrottled) BOOL fileWritingThrottled;
@property (nonatomic, getter=hasStoredCurrentDigestMigrationTimeExpired) BOOL storedCurrentDigestMigrationTimeExpired;

+ (id)_persistentStateFilePath;
+ (id)_dataDirectoryPath;

- (id)_representationForGroup:(id)a0 atIndex:(unsigned long long)a1 detailed:(BOOL)a2;
- (id)_representationForRequestMigrationTimes:(id)a0;
- (unsigned long long)_getSectionTypeAndRemoveNotificationRequest:(id)a0 inMutableRepresentationForSections:(id)a1;
- (id)_representationForMigrationScheduler:(id)a0;
- (BOOL)_isMutableListRepresentationEmpty:(id)a0;
- (void)_clearStoredSectionIdentifier:(id)a0 inMutableRepresentationForSection:(id)a1;
- (id)_representationForGroups:(id)a0 detailed:(BOOL)a1;
- (id)_mutableRepresentationForRepresentationForNotificationRequests:(id)a0;
- (void)_mergePendingNotificationListRepresentation:(id)a0 withMutableListRepresentation:(id)a1;
- (BOOL)_isRepresentationForSections:(id)a0 equalToRepresentationForSections:(id)a1;
- (BOOL)_removeNotificationRequest:(id)a0 inMutableRepresentationForGroup:(id)a1;
- (id)_representationForSections:(id)a0 detailed:(BOOL)a1;
- (void)_ensureDataDirectoryExists;
- (id)_mutableRepresentationForRequestMigrationTimesInRepresentationForList:(id)a0;
- (id)stateRepresentationForNotificationList:(id)a0 sectionLists:(id)a1 listCache:(id)a2 migrationScheduler:(id)a3 listInfo:(id)a4 detailed:(BOOL)a5;
- (BOOL)_isListRepresentation:(id)a0 equalToListRepresentation:(id)a1;
- (void)_clearStoredRequestMigrationTimesForSectionIdentifier:(id)a0;
- (BOOL)_removeNotificationRequest:(id)a0 inMutableRepresentationForSection:(id)a1;
- (id)_representationForSection:(id)a0 detailed:(BOOL)a1;
- (id)_sectionRepresentationOfSectionType:(id)a0 inRepresentationForSections:(id)a1;
- (id)_mutableRepresentationForRepresentationForGroup:(id)a0;
- (void)_mergeRepresentationForSection:(id)a0 withMutableRepresentationForSection:(id)a1;
- (void)_writePersistentStateToFileWithRepresentation:(id)a0;
- (BOOL)_isRepresentationForGroups:(id)a0 equalToRepresentationForGroups:(id)a1;
- (unsigned long long)sectionForStoredNotificationRequest:(id)a0;
- (void)_mergeRepresentationForGroup:(id)a0 withMutableRepresentationForGroup:(id)a1;
- (void)updatePersistentStateForNotificationList:(id)a0 sectionLists:(id)a1 listCache:(id)a2 migrationScheduler:(id)a3 listInfo:(id)a4 detailed:(BOOL)a5;
- (id)_mutableRepresentationForRepresentationForSection:(id)a0;
- (void)_scheduleThrottledPersistentStateWrite;
- (BOOL)_isRepresentationForGroupEmpty:(id)a0;
- (void)_mergeRepresentationForNotificationRequests:(id)a0 withMutableRepresentationForNotificationRequests:(id)a1;
- (BOOL)_isRepresentationForGroup:(id)a0 equalToRepresentationForGroup:(id)a1;
- (id)initWithDelegate:(id)a0;
- (id)_representationForListCache:(id)a0;
- (void)_mergePendingRequestMigrationTimesRepresentation:(id)a0 withMutableRepresentationForRequestMigrationTimes:(id)a1;
- (id)_mutableRepresentationForRepresentationForRequestMigrationTimes:(id)a0;
- (id)_summaryMigrationTimeInRepresentationForList:(id)a0;
- (id)_mutableRepresentationForStoredListRepresentation:(id)a0;
- (BOOL)_doesPersistentStateFileExist;
- (id)_getStoredMigrationTimeAndClearNotificationRequest:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (void)_readPersistentStateFromFile;
- (BOOL)_isRepresentationForSectionEmpty:(id)a0;
- (BOOL)_isRepresentationForSection:(id)a0 equalToRepresentationForSection:(id)a1;
- (id)_representationForNotificationRequest:(id)a0;
- (id)_representationForGroupWithSectionIdentifier:(id)a0 threadIdentifier:(id)a1 inRepresentationForGroups:(id)a2;
- (void)_clearStoredListRepresentationForSectionIdentifier:(id)a0;
- (void)_publishOnReadForStoredPersistentStateRepresentation:(id)a0;
- (int)_formatVersionForListRepresentation:(id)a0;
- (id)_listRepresentationForNotificationList:(id)a0 sections:(id)a1 listCache:(id)a2 migrationScheduler:(id)a3 listInfo:(id)a4 detailed:(BOOL)a5;
- (void)_readPersistentStateFromFileIfNecessaryWithCompletion:(id /* block */)a0;
- (id)_representationForNotificationRequests:(id)a0 detailed:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_isRepresentationForMigrationTimes:(id)a0 equalToRepresentationForMigrationTimes:(id)a1;

@end
