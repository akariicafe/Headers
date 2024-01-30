@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {
    UITextInputController *_textInput;
    struct __CFStringTokenizer { } *_tokenizer;
    int _tokenizerType;
    BOOL _tokenizerIsInvalid;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isDownstreamForDirection:(long long)a0 atPosition:(id)a1;
- (id)initWithTextInputController:(id)a0;
- (id)_positionFromPosition:(id)a0 offset:(unsigned long long)a1 affinity:(long long)a2;
- (long long)_writingDirectionAtPosition:(id)a0;
- (long long)_indexForTextPosition:(id)a0;
- (void)invalidateTokenizer;
- (id)_closestTokenSubrangeForPosition:(id)a0 granularity:(long long)a1 downstream:(BOOL)a2;

@end
