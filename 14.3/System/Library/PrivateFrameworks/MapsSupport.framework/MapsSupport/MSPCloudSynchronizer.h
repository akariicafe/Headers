@class NSUUID, NSString, MSPCloudSynchronizerRunConditions, NSArray, MSPCloudKitAccountAccess, NSObject, MSPCloudMigrator, MSPCloudClientRegistration, MSPJournal;
@protocol OS_dispatch_source, OS_dispatch_queue, MSPCloudSynchronizerDelegate;

@interface MSPCloudSynchronizer : NSObject <MSPCloudSynchronizerRunConditionsDelegate, MSPCloudNotificationReceiver>

@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) MSPCloudSynchronizerRunConditions *runConditions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *mergeTimer;
@property (retain, nonatomic) NSUUID *clientIdentifier;
@property (retain, nonatomic) MSPCloudClientRegistration *clientRegistration;
@property (retain, nonatomic) MSPJournal *journal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue;
@property (retain, nonatomic) MSPCloudMigrator *migrator;
@property (nonatomic) BOOL hasMigratedPreSync;
@property (nonatomic) BOOL hasMigrated;
@property (nonatomic) unsigned long long lastRetryInterval;
@property (retain, nonatomic) NSArray *containers;
@property (weak, nonatomic) id<MSPCloudSynchronizerDelegate> delegate;
@property (retain, nonatomic) MSPCloudKitAccountAccess *cloudAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_merge;
- (void)requestMerge;
- (void)requestMergeWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)retryIntervalForError:(id)a0;
- (void)dealloc;
- (void)merge;
- (void)stop;
- (id)initWithDefaultRemoteContainers;
- (void)performPreSyncMigrations:(id /* block */)a0;
- (BOOL)isCurrentlyRunning;
- (void)performMigrationsWithCompletion:(id /* block */)a0;
- (void)handleAccountChangeWithError:(id)a0 completion:(id /* block */)a1;
- (void)didReceiveRemoteNotification:(id)a0;
- (void)requestMergeWithReason:(unsigned long long)a0 afterDelay:(unsigned long long)a1;
- (id)initWithDefaultLocalContainers;
- (void)start;
- (void)prepareForMergeWithGroup:(id)a0 completion:(id /* block */)a1;
- (id)initWithCloudContainers:(id)a0 clientRegistration:(id)a1 runConditions:(id)a2 cloudAccess:(id)a3;
- (void)runConditionsChanged:(id)a0;
- (id)initWithContainers:(id)a0;

@end
