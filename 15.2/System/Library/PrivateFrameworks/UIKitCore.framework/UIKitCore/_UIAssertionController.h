@class NSMutableDictionary;
@protocol _UIAssertionControllerSubject;

@interface _UIAssertionController : NSObject {
    NSMutableDictionary *_activeAssertionRecords;
}

@property (readonly, weak, nonatomic) id<_UIAssertionControllerSubject> subject;

- (void)_endTrackingAssertion:(id)a0;
- (id)initWithAssertionSubject:(id)a0;
- (void)_beginTrackingAssertion:(id)a0;
- (void).cxx_destruct;
- (id)vendAssertionOfType:(unsigned long long)a0 initialState:(BOOL)a1 reason:(id)a2;
- (void)_enforceSubjectAwarenessOfAssertionState:(BOOL)a0 forAssertionType:(unsigned long long)a1;
- (id)vendAssertionOfType:(unsigned long long)a0 initialState:(BOOL)a1;
- (id)debugDescription;

@end
