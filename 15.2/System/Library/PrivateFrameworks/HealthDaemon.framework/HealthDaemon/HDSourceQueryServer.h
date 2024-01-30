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

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (double)_queue_queryLogThreshold;
- (void).cxx_destruct;

@end
