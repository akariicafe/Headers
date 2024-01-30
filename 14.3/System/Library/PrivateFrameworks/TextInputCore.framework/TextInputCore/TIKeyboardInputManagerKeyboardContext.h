@class TIKeyboardOutput, TIRevisionHistory, TIKeyboardState;

@interface TIKeyboardInputManagerKeyboardContext : NSObject

@property (readonly, nonatomic) TIKeyboardState *currentState;
@property (readonly, nonatomic) TIKeyboardOutput *output;
@property (retain, nonatomic) TIRevisionHistory *revisionHistory;

- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward:(unsigned long long)a0;
- (void)deleteForward:(unsigned long long)a0;
- (void)acceptCandidate:(id)a0;
- (void)unmarkText:(id)a0;
- (void)clearInputForMarkedText;
- (void)insertTextAfterSelection:(id)a0;
- (id)initWithKeyboardState:(id)a0;
- (void)deleteTextBackward:(id)a0;
- (void)deleteHandwritingStrokes:(id)a0;

@end
