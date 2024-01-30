@class UIView;

@interface UIKBEmojiSnapshotSizingView : UIView {
    struct CGSize { double width; double height; } _snapshotSize;
}

@property (readonly, nonatomic) UIView *snapshotView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithSnapshotView:(id)a0;

@end
