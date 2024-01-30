@class NSMutableArray, TIKeyboardTyper;

@interface TITestTyperDriver : NSObject

@property (retain, nonatomic) TIKeyboardTyper *testTyper;
@property (readonly, nonatomic) NSMutableArray *failedTests;
@property (readonly, nonatomic) NSMutableArray *syntaxErrors;
@property (nonatomic, getter=isDebug) BOOL debug;

- (id)init;
- (void).cxx_destruct;
- (void)handleDocumentMatch:(id)a0 lineNumber:(int)a1;
- (BOOL)consumeTestFile:(id)a0;
- (BOOL)consumeTextString:(id)a0;
- (BOOL)handleBoolConfig:(id)a0 withValue:(BOOL)a1 lineNumber:(int)a2;
- (void)handleCommand:(id)a0 withValue:(id)a1 lineNumber:(int)a2;
- (void)handleCorrectionMatch:(id)a0 lineNumber:(int)a1;
- (BOOL)handleIntConfig:(id)a0 withValue:(int)a1 lineNumber:(int)a2;
- (void)handleNewLine;
- (void)handlePredictionMatch:(id)a0 lineNumber:(int)a1;
- (BOOL)handleStringConfig:(id)a0 withValue:(id)a1 lineNumber:(int)a2;
- (void)handleTyping:(id)a0;
- (id)initWithTestTyper:(id)a0;
- (void)printDebugInfo:(id)a0 lineNumber:(int)a1;
- (void)reportFailedTest:(id)a0 lineNumber:(int)a1;
- (void)reportSyntaxErrors:(id)a0 lineNumber:(int)a1;
- (void)selectFromPredictionBar:(id)a0 lineNumber:(int)a1;

@end
