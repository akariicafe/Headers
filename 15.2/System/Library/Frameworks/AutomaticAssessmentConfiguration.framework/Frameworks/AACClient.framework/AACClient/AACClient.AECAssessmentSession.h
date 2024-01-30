@interface AACClient.AECAssessmentSession : NSObject {
    void /* unknown type, empty encoding */ stateAntiphony;
    void /* unknown type, empty encoding */ taskQueue;
    void /* unknown type, empty encoding */ policyBundleFactory;
    void /* unknown type, empty encoding */ configurationValidator;
    void /* unknown type, empty encoding */ policySession;
    void /* unknown type, empty encoding */ updateSubscription;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL isActive;

- (void)end;
- (void)begin;
- (void)updateWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)a0 queue:(id)a1;

@end
