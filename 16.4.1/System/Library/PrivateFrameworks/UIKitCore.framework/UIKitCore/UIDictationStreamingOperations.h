@class NSMutableArray;
@protocol UITextInput;

@interface UIDictationStreamingOperations : NSObject {
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    id<UITextInput> _document;
}

@property (retain, nonatomic) NSMutableArray *operations;

- (id)pop;
- (BOOL)isEmpty;
- (void)setDocument:(id)a0;
- (void)popAndInvoke;
- (id)init;
- (void).cxx_destruct;
- (void)clearOperations;
- (void)_performReplaceSelectedText:(id)a0;
- (double)delayAfterSelector:(SEL)a0;
- (void)dictationWillBeginInDocument:(id)a0;
- (BOOL)hasOperations;
- (BOOL)isNotEmpty;
- (void)performSelectRangeForSpeech:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pushInsertTextForSpeech:(id)a0;
- (void)pushReplaceSelectionWithText:(id)a0;
- (void)pushSelectRangeForSpeech:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pushSpeechOperation:(id)a0;
- (void)pushSpeechOperationWithSelectionChangeDelta:(long long)a0 block:(id /* block */)a1;
- (unsigned long long)selectionChangeDelta;
- (void)willEndEditingInInputDelegate:(id)a0;

@end
