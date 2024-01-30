@class NSMapTable, HMBModelContainer, NSOperationQueue, HMBLocalSQLContext, NSString, HMFUnfairLock;
@protocol HMBLocalDatabaseDelegate;

@interface HMBLocalDatabase : HMFObject <HMFLogging> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) HMBLocalSQLContext *local;
@property (readonly, nonatomic) NSMapTable *openZonesByZoneID;
@property (copy, nonatomic) id /* block */ localZoneFactory;
@property (readonly, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalDatabaseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)detectedLocalCorruptionWithInfo:(id)a0;
- (id)logIdentifier;
- (void)handleLocalZoneShutdown:(id)a0;
- (id)fetchZonesWithError:(id *)a0;
- (id)initWithLocalSQLContext:(id)a0 configuration:(id)a1;
- (id)openZoneWithMirror:(id)a0 configuration:(id)a1 error:(id *)a2;
- (BOOL)shouldLogPrivateInformation;
- (void).cxx_destruct;
- (BOOL)removeLocalDataForZone:(id)a0 error:(id *)a1;
- (id)openZoneWithZoneID:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithDatastorePath:(id)a0 configuration:(id)a1;
- (id)openedZoneWithZoneID:(id)a0;
- (id)removeZone:(id)a0;
- (void)dealloc;
- (id)openedZoneWithMirror:(id)a0;

@end
