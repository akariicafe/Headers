@interface AACDependencies.AEDBackingAssessmentSession : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ policyBundleFactory;
    void /* unknown type, empty encoding */ configurationValidator;
    void /* unknown type, empty encoding */ policySession;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL isActive;

- (void)begin;
- (void)end;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
