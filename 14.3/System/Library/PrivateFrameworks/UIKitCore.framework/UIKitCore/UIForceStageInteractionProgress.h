@class NSString, NSObservation;

@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver> {
    NSObservation *_observation;
    BOOL _completed;
    BOOL _started;
}

@property (nonatomic) BOOL completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveObservedValue:(id)a0;
- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
