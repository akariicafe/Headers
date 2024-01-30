@class NSString, USOSerializedGraph;

@interface SIRINLUSystemPrompted : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *reference;
@property (retain, nonatomic) NSString *renderedText;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithReference:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
