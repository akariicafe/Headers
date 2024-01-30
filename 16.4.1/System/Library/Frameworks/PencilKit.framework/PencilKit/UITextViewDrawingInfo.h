@class PKTiledView, UITextView;
@protocol UITextViewDrawingDelegate;

@interface UITextViewDrawingInfo : NSObject {
    BOOL _addBottomPadding;
    BOOL _rulerEnabled;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id<UITextViewDrawingDelegate> _delegate;
    Class _drawingClass;
}

- (void).cxx_destruct;

@end
