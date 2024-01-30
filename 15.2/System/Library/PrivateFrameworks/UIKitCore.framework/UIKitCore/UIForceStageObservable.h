@class NSString;

@interface UIForceStageObservable : NSObservationSource <NSObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveObservedValue:(id)a0;

@end
