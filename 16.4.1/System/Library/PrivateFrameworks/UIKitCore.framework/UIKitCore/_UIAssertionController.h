@class NSMutableDictionary;
@protocol _UIAssertionControllerSubject;

@interface _UIAssertionController : NSObject {
    NSMutableDictionary *_activeAssertionRecords;
}

@property (readonly, weak, nonatomic) id<_UIAssertionControllerSubject> subject;

- (id)vendAssertionOfType:(unsigned long long)a0 initialState:(BOOL)a1;
- (id)vendAssertionOfType:(unsigned long long)a0 initialState:(BOOL)a1 reason:(id)a2;
- (void)_beginTrackingAssertion:(id)a0;
- (id)debugDescription;
- (BOOL)hasAssertionsOfType:(unsigned long long)a0;
- (id)initWithAssertionSubject:(id)a0;
- (void)_enforceSubjectAwarenessOfAssertionState:(BOOL)a0 forAssertionType:(unsigned long long)a1;
- (void)_endTrackingAssertion:(id)a0;
- (id)vendAssertionOfType:(unsigned long long)a0 initialState:(BOOL)a1 reason:(id)a2 requiresExplicitInvalidation:(BOOL)a3;
- (void).cxx_destruct;

@end
