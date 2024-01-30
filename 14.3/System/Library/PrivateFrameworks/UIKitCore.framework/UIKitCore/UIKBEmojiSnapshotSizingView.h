@class UIView;

@interface UIKBEmojiSnapshotSizingView : UIView {
    struct CGSize { double width; double height; } _snapshotSize;
}

@property (readonly, nonatomic) UIView *snapshotView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (id)initWithSnapshotView:(id)a0;

@end
