@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserWantedToRepeat : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *systemDialogActId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSystemDialogActId:(id)a0 reference:(id)a1;

@end
