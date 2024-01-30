@class NSString, ATXPredictedTransition, CLLocation, NSDate;
@protocol ATXPredictedLocationsManagerProtocol, ATXLocationManagerProtocol;

@interface ATXTransitionPredictorCR : NSObject <ATXTransitionPredictorProtocol> {
    id<ATXLocationManagerProtocol> _locationManager;
    id<ATXPredictedLocationsManagerProtocol> _predictionsManager;
    CLLocation *_locationAtLastPrediction;
    ATXPredictedTransition *_upcomingTransition;
}

@property (retain, nonatomic) NSDate *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)nextLoi;
- (id)initWithLocationManager:(id)a0 locationPredictionsManager:(id)a1;
- (id)getNextTransitionOnActivity:(id)a0;
- (id)getNextTransitionOnActivity:(id)a0 date:(id)a1 location:(id)a2;
- (BOOL)isCacheValidForDate:(id)a0 location:(id)a1;
- (BOOL)updateCacheOnActivity:(id)a0;
- (id)nextExitDate;

@end
