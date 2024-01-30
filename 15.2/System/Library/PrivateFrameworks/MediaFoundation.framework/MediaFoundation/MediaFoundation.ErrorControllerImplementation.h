@interface MediaFoundation.ErrorControllerImplementation : _TtCs12_SwiftObject <MFResettable, MFErrorController> {
    void /* unknown type, empty encoding */ externalImplementation;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ reporter;
}

- (void)reset;
- (void)resolveError:(id)a0 forItem:(id)a1 completion:(id /* block */)a2;
- (void)reportCriticalError:(id)a0 forItem:(id)a1;

@end
