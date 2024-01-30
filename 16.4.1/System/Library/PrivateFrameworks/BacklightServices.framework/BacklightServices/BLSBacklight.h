@class NSString;
@protocol BLSBacklightProxy;

@interface BLSBacklight : NSObject <BLSBacklightStateObservable, BLSBacklightChangeRequestable> {
    id<BLSBacklightProxy> _backlightProxy;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic) long long flipbookState;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedBacklight;
+ (void)setDefaultBacklightProxy:(id)a0;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)performChangeRequest:(id)a0;

@end
