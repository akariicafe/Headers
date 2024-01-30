@class USOSerializedGraph;

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *task;
@property (retain, nonatomic) USOSerializedGraph *goal;

- (id)initWithTask:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGoal:(id)a0;

@end
