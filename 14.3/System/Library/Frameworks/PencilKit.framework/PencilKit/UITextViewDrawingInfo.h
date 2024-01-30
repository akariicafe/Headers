@class UITextView, PKTiledView, NSString, UILongPressGestureRecognizer;
@protocol UITextViewDrawingDelegate;

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UITextView *textView;
@property (nonatomic) BOOL addBottomPadding;
@property (retain, nonatomic) PKTiledView *tiledView;
@property (weak, nonatomic) id<UITextViewDrawingDelegate> delegate;
@property (retain, nonatomic) UILongPressGestureRecognizer *insertLongPressGestureRecognizer;
@property (nonatomic) BOOL rulerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initForTextView:(id)a0;

@end
