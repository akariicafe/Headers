@interface PNPSyntheticWaitEvent : PNPSyntheticPencilEvent {
    double _delay;
}

- (id)initWithDelay:(double)a0;
- (void)serviceDestination:(id)a0 fromSource:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
