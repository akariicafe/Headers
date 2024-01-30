@class NSString, NSArray, SIRINLUReferenceContext, SIRINLURewriteMessage;

@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property int asrHypothesisIndex;
@property (retain, nonatomic) NSString *externalParserId;
@property (retain, nonatomic) SIRINLURewriteMessage *rewrite;
@property (retain, nonatomic) NSString *rewrittenUtterance;
@property (retain, nonatomic) NSArray *rewrites;
@property (retain, nonatomic) NSArray *spans;
@property (retain, nonatomic) SIRINLUReferenceContext *referenceContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2 spans:(id)a3 rewriteMessage:(id)a4 referenceContext:(id)a5;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2 spans:(id)a3;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2 spans:(id)a3 rewriteMessage:(id)a4;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2 spans:(id)a3 rewriteMessages:(id)a4;

@end
