@class NSMapTable, HMBModelContainer, NSOperationQueue, HMFUnfairLock, HMBLocalSQLContext, NSString;
@protocol HMBLocalDatabaseDelegate;

@interface HMBLocalDatabase : HMFObject <HMFLogging>

@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) HMBLocalSQLContext *local;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) NSMapTable *openZonesByZoneID;
@property (copy, nonatomic) id /* block */ localZoneFactory;
@property (readonly, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalDatabaseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)fetchZonesWithError:(id *)a0;
- (id)openOrCreateZoneWithMirror:(id)a0 delegate:(id)a1 error:(id *)a2;
- (BOOL)removeLocalDataForZone:(id)a0 error:(id *)a1;
- (BOOL)shouldLogPrivateInformation;
- (void).cxx_destruct;
- (void)dealloc;
- (id)openExistingZoneWithMirror:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)openedZoneWithMirror:(id)a0;
- (void)detectedLocalCorruptionWithInfo:(id)a0;
- (id)initWithDatastorePath:(id)a0 readOnly:(BOOL)a1 modelContainer:(id)a2;
- (id)openExistingZoneWithZoneID:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)openedZoneWithZoneID:(id)a0;
- (id)removeZone:(id)a0;
- (id)logIdentifier;
- (id)openOrCreateZoneWithZoneID:(id)a0 delegate:(id)a1 error:(id *)a2;
- (void)handleLocalZoneShutdown:(id)a0;
- (id)initWithLocalSQLContext:(id)a0 modelContainer:(id)a1;

@end
