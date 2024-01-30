@class NSString, NSObservation;

@interface _NSOwningObservingObservation : _NSConcreteObservation <NSOwningObserver> {
    NSObservation *_ownedObservation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObservation:(id)a0;

@end
