@class NSString, TIKeyboardCandidate;

@interface ACTAcceptCandidate : ACTUserAction

@property (readonly, nonatomic) TIKeyboardCandidate *candidate;
@property (readonly, nonatomic) NSString *intendedCandidate;
@property (readonly, nonatomic) double timestamp;

- (id)description;
- (void).cxx_destruct;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithCandidate:(id)a0 timestamp:(double)a1;
- (id)initWithCandidate:(id)a0 timestamp:(double)a1 intendedCandidate:(id)a2;

@end
