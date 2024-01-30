@class NSArray;

@interface SIRINLUNLContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *systemDialogActs;
@property (retain, nonatomic) NSArray *activeTasks;
@property (retain, nonatomic) NSArray *executedTasks;
@property (retain, nonatomic) NSArray *salientEntities;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSystemDialogActs:(id)a0 activeTasks:(id)a1 executedTasks:(id)a2;
- (id)initWithSystemDialogActs:(id)a0 activeTasks:(id)a1 executedTasks:(id)a2 salientEntities:(id)a3;

@end
