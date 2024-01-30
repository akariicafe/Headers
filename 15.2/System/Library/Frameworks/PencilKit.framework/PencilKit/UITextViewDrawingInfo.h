@class UITextView, NSString, PKTiledView, UILongPressGestureRecognizer;
@protocol UITextViewDrawingDelegate;

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate> {
    BOOL _addBottomPadding;
    BOOL _rulerEnabled;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id<UITextViewDrawingDelegate> _delegate;
    UILongPressGestureRecognizer *_insertLongPressGestureRecognizer;
    Class _drawingClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
