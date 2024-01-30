@class UITextView, WFDictateTextActionStopButton;
@protocol WFDictateTextActionViewDelegate;

@interface WFDictateTextActionView : UIView

@property (weak, nonatomic) UITextView *textView;
@property (weak, nonatomic) WFDictateTextActionStopButton *stopButton;
@property (weak, nonatomic) id<WFDictateTextActionViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 padded:(BOOL)a1;
- (void)stopButtonTapped;
- (void)updateWithTranscription:(id)a0;

@end
