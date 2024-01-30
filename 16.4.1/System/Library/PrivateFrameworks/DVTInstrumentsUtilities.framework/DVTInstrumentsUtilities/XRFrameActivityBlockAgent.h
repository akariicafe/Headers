@interface XRFrameActivityBlockAgent : XRMobileAgent <XRMinorFrameAgent> {
    id /* block */ _block;
    _Atomic unsigned long long _opPtr;
}

@property (nonatomic) _Atomic BOOL *yieldNow;

- (void)dealloc;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)executeStopOnItinerary:(id)a0;
- (id)agentDiagnosticsName;
- (id)operationRepresentation;

@end
