@class NSString, NSArray, SNAAssertionTarget;

@interface SessionAssertion.SessionRequestAssertion : NSObject {
    void /* unknown type, empty encoding */ attributeAssertion;
    void /* unknown type, empty encoding */ invalidationHandler;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) NSArray *sessionIdentifiers;
@property (nonatomic, readonly) unsigned long long snaInvalidationReason;
@property (nonatomic, readonly) unsigned long long snaState;
@property (nonatomic, readonly) SNAAssertionTarget *snaTarget;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0 target:(id)a1 invalidateOnSessionRequest:(BOOL)a2 invalidationHandler:(id /* block */)a3;
- (id)initWithExplanation:(id)a0 target:(id)a1 options:(id)a2 invalidationHandler:(id /* block */)a3;

@end
