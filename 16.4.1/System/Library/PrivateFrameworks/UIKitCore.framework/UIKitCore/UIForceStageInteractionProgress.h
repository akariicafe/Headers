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

- (void)_reset;
- (void)receiveObservedValue:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
