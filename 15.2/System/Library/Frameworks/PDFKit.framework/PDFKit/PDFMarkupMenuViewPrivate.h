@class NSArray, NSDictionary, _UIBackdropView, UIImageView;
@protocol PDFMarkupMenuViewDelegate;

@interface PDFMarkupMenuViewPrivate : NSObject {
    unsigned long long markupStyle;
    unsigned long long markupNoteStyle;
    id<PDFMarkupMenuViewDelegate> delegate;
    NSDictionary *menuControls;
    NSArray *activeControlKeys;
    double calloutArrowX;
    BOOL calloutArrowPointsUp;
    _UIBackdropView *backgroundView;
    _UIBackdropView *separatorBackgroundView;
    UIImageView *blurMaskView;
    UIImageView *tintMaskView;
    UIImageView *separatorMaskView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
}

- (void).cxx_destruct;

@end
