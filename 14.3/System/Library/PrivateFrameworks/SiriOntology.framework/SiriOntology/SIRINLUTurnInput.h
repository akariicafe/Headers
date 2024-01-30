@class NSArray;

@interface SIRINLUTurnInput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *asrOutputs;
@property (retain, nonatomic) NSArray *systemDialogActs;
@property (retain, nonatomic) NSArray *activeTasks;
@property (retain, nonatomic) NSArray *executedTasks;
@property (retain, nonatomic) NSArray *salientEntities;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAsrOutputs:(id)a0 systemDialogActs:(id)a1 activeTasks:(id)a2 executedTasks:(id)a3 salientEntities:(id)a4;

@end
