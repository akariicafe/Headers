@class NSString, ATXPredictedTransitionsCache;
@protocol ATXLocationManagerProtocol;

@interface ATXCommutePredictor : NSObject <ATXCachedTransitionPredictorProtocol> {
    ATXPredictedTransitionsCache *_cache;
    id<ATXLocationManagerProtocol> _manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTransitionsCache:(id)a0 locationManager:(id)a1;
- (id)getNextTransitionOnActivity:(id)a0;
- (void)prewarmOnActivity:(id)a0;

@end
