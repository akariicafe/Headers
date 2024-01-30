@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {
    UITextInputController *_textInput;
    struct __CFStringTokenizer { } *_tokenizer;
    struct { long long location; long long length; } _tokenizerRange;
    int _tokenizerType;
    BOOL _tokenizerIsInvalid;
    struct __CFStringTokenizer { } *_wordTokenizer;
    struct { long long location; long long length; } _wordTokenizerRange;
    BOOL _wordTokenizerIsInvalid;
}

- (void)dealloc;
- (id)initWithTextInputController:(id)a0;
- (BOOL)_isDownstreamForDirection:(long long)a0 atPosition:(id)a1;
- (long long)_indexForTextPosition:(id)a0;
- (id)_positionFromPosition:(id)a0 offset:(unsigned long long)a1 affinity:(long long)a2;
- (void)invalidateTokenizer;
- (void).cxx_destruct;
- (id)_closestTokenSubrangeForPosition:(id)a0 granularity:(long long)a1 downstream:(BOOL)a2;

@end
