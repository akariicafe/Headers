@class NSString, BSSimpleAssertion;

@interface SBFFrameRateAssertion : NSObject <BSInvalidatable> {
    BSSimpleAssertion *_assertion;
    struct _UIUpdateRequest { unsigned int flags; unsigned int minRate; unsigned int preferredRate; unsigned int maxRate; unsigned long long phase; unsigned long long load; } _updateRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 highFrameRateReason:(unsigned int)a1;
- (void)invalidate;
- (void).cxx_destruct;

@end
