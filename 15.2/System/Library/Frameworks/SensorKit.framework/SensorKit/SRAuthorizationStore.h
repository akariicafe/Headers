@class NSSet, NSDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, SRTCCStore;

@interface SRAuthorizationStore : NSObject {
    int _notifyToken;
    NSHashTable *_readerAuthorizationDelegates;
    NSHashTable *_writerAuthorizationDelegates;
    id<SRTCCStore> _tccStore;
    NSSet *_sensors;
}

@property (class, readonly) SRAuthorizationStore *allSensorsStore;

@property (copy) NSDictionary *readerAuthorizationValues;
@property (copy) NSDictionary *readerLastModifiedAuthorizationTimes;
@property (copy) NSDictionary *writerAuthorizationValues;
@property BOOL sensorKitActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (copy) NSDictionary *readerAuthorizationGroups;
@property (copy) NSDictionary *writerAuthorizationGroups;

+ (void)initialize;
+ (id)sharedAuthorizationStoreForSensors:(id)a0;

- (BOOL)setAuthorizationForBundleId:(id)a0 service:(id)a1 value:(BOOL)a2 setOverride:(BOOL)a3;
- (void)addReaderAuthorizationDelegate:(id)a0;
- (void)resetAllAuthorizations;
- (void)removeWriterAuthorizationDelegate:(id)a0;
- (id)readerAuthorizationBundleIdValues;
- (void)removeReaderAuthorizationDelegate:(id)a0;
- (void)resetAuthorizationForService:(id)a0 bundleId:(id)a1;
- (BOOL)setAuthorizationForBundleId:(id)a0 service:(id)a1 value:(BOOL)a2;
- (BOOL)sensorHasReaderAuthorization:(id)a0 forBundleId:(id)a1;
- (id)initWithSensors:(id)a0;
- (void)addWriterAuthorizationDelegate:(id)a0;
- (BOOL)sensorHasReaderAuthorization:(id)a0;
- (void)dealloc;
- (void)resetAllAuthorizationsForBundleId:(id)a0;
- (void)listenForAuthorizationUpdates:(BOOL)a0;
- (BOOL)checkAccessForService:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
