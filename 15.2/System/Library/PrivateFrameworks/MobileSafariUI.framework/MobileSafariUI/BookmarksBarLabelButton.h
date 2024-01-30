@class UILongPressGestureRecognizer, WebBookmark;
@protocol BookmarksBarLabelButtonDelegate;

@interface BookmarksBarLabelButton : UIButton {
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (nonatomic) BOOL usesLightControls;
@property (weak, nonatomic) id<BookmarksBarLabelButtonDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cursorRegionInset;

+ (id)labelButton;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_handleLongPressGestureRecognizer:(id)a0;
- (void)_openInNewTabs:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bookmarksBarLabelButtonHitRect;

@end
