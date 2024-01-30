@class NSMutableArray;
@protocol UITextInput;

@interface UIDictationStreamingOperations : NSObject {
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    id<UITextInput> _document;
}

@property (retain, nonatomic) NSMutableArray *operations;

- (id)pop;
- (BOOL)isNotEmpty;
- (BOOL)hasOperations;
- (void)popAndInvoke;
- (void)clearOperations;
- (void)performSelectRangeForSpeech:(id)a0;
- (void)pushSpeechOperation:(id)a0;
- (void)pushSpeechOperationWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)_performReplaceSelectedText:(id)a0;
- (double)delayAfterSelector:(SEL)a0;
- (void)dictationWillBeginInDocument:(id)a0;
- (void)pushSelectRangeForSpeech:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pushInsertTextForSpeech:(id)a0;
- (void)pushReplaceSelectionWithText:(id)a0;
- (void)willEndEditingInInputDelegate:(id)a0;
- (unsigned long long)selectionChangeDelta;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (void)setDocument:(id)a0;

@end
