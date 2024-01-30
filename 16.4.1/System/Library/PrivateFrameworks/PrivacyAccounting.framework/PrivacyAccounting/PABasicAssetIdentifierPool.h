@class NSString, NSMutableSet, NSObject;
@protocol PAAssetIdentifierPoolDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface PABasicAssetIdentifierPool : NSObject <PAAssetIdentifierPooling, PAAggregateVisibilityStateMonitorDelegate> {
    id<PAAssetIdentifierPoolDelegate> _delegate;
    unsigned long long _maxPoolSize;
    double _autoDrainInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_drainTimer;
    unsigned long long _assetIdentifierPoolSize;
    NSMutableSet *_assetIdentifiers;
    unsigned long long _eventCount;
    BOOL _stateMonitoringEstablished;
}

@property (nonatomic) long long visibilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drainPool;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)a0;
- (void)addAssetIdentifiers:(id)a0 accessEventCount:(unsigned long long)a1;
- (id)initWithMaxPoolSize:(unsigned long long)a0 autoDrainInterval:(double)a1 onQueue:(id)a2 delegate:(id)a3;

@end
