@class NSUUID, USOSerializedGraph, NSString;

@interface SIRINLUSystemReportedSuccess : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *taskId;
@property (retain, nonatomic) USOSerializedGraph *task;
@property (retain, nonatomic) NSString *renderedText;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskId:(id)a0 task:(id)a1;

@end
