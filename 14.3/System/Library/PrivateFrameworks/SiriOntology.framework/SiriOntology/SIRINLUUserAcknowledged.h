@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserAcknowledged : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *systemDialogActId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSystemDialogActId:(id)a0 reference:(id)a1;

@end
