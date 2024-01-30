@class NSMapTable, HMBModelContainer, NSOperationQueue, HMBLocalSQLContext, NSString;
@protocol HMBLocalDatabaseDelegate;

@interface HMBLocalDatabase : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
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

- (id)logIdentifier;
- (id)removeZone:(id)a0;
- (void)detectedLocalCorruptionWithInfo:(id)a0;
- (id)openZoneWithZoneID:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)openZoneWithMirror:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)openedZoneWithZoneID:(id)a0;
- (id)initWithLocalSQLContext:(id)a0 configuration:(id)a1;
- (id)openedZoneWithMirror:(id)a0;
- (id)initWithDatastorePath:(id)a0 configuration:(id)a1;
- (void)dealloc;
- (void)handleLocalZoneShutdown:(id)a0;
- (BOOL)removeLocalDataForZone:(id)a0 error:(id *)a1;
- (id)fetchZonesWithError:(id *)a0;
- (void).cxx_destruct;

@end
