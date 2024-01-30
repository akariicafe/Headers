@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {
    id _weakReceiver;
    id _strongReceiver;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)initWithStrongReceiver:(id)a0;
- (id)initWithWeakReceiver:(id)a0;
- (id)initWithReceiver:(id)a0 strong:(BOOL)a1;

@end
