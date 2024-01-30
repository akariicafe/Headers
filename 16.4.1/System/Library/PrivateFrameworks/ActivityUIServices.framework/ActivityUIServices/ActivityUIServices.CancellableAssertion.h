@interface ActivityUIServices.CancellableAssertion : NSObject <BSInvalidatable> {
    void /* unknown type, empty encoding */ token;
}

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
