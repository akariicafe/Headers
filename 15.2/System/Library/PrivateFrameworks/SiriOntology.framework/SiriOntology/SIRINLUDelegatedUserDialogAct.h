@class NSString;

@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property int asrHypothesisIndex;
@property (retain, nonatomic) NSString *rewrittenUtterance;
@property (retain, nonatomic) NSString *externalParserId;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2;

@end
