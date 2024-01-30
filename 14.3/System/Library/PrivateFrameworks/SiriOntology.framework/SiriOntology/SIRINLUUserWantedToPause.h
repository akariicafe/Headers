@class USOSerializedGraph;

@interface SIRINLUUserWantedToPause : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *reference;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithReference:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
