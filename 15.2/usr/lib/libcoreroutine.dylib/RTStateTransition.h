@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *listTransitions;

- (void)encodeWithCoder:(id)a0;
- (void)addStateTransitionOneTimeTransFromStateTransition:(id)a0;
- (void).cxx_destruct;
- (void)submitTransition:(id)a0;
- (id)init;
- (id)getPredTrans:(double)a0 duration:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;
- (id)initWithCoder:(id)a0;
- (long long)count;
- (void)showTransition;
- (void)cleanTransition:(double)a0;

@end
