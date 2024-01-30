@class UITapGestureRecognizer, NSString, UIImageView, UIView, UILongPressGestureRecognizer;
@protocol PageRangeDelegate;

@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    BOOL _inRange;
    BOOL _menuPresented;
    BOOL _thisCellIsPresentingMenu;
    BOOL _menuHiddenByTapInThisCell;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *dimmingView;
@property (weak, nonatomic) id<PageRangeDelegate> delegate;
@property (nonatomic) long long pageIndex;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)canModifyPageRange;
- (void)setEndPage:(id)a0;
- (void)setInRange:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)gestureRecognizers;
- (void)handleLongPress:(id)a0;
- (void)prepareForReuse;
- (void)showMenu;
- (void)addPage:(id)a0;
- (void)layoutSubviews;
- (void)removePage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTap:(id)a0;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)addAllPages:(id)a0;
- (void)setStartPage:(id)a0;

@end
