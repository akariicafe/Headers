@interface WFGetTravelTimeAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)a0;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)getMapItemFromCollection:(id)a0 parameterKey:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isStartOrDestinationCurrentLocation;

@end
