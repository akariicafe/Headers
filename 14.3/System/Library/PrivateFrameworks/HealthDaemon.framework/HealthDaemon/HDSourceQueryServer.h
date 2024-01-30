@class NSString, NSMutableSet;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {
    BOOL _deliversUpdates;
    NSMutableSet *_sources;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_sourcesForObjectsOfType:(id)a0 filter:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)sourceClientProxy;
- (double)_queue_queryLogThreshold;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_sourceAdded:(id)a0;

@end
