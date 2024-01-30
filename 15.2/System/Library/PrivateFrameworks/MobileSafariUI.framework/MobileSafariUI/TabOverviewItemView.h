@class NSString, UIImage, UIView, TabSnapshotImageView, UIButton;

@interface TabOverviewItemView : TabThumbnailView <TabOverviewItemView> {
    BOOL _hasBorrowedContentView;
}

@property (readonly, nonatomic) UIButton *closeButton;
@property (nonatomic) double closeButtonLeftInset;
@property (nonatomic) double extraTitleScale;
@property (nonatomic) BOOL showsCloseButton;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hidesTabTitle;
@property (nonatomic) double titleAlpha;
@property (nonatomic) double headerBackgroundViewAlpha;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (nonatomic) double titleHeight;
@property (nonatomic) double titleOffset;
@property (nonatomic) double titleScale;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } titlePadding;
@property (nonatomic) double headerCornerRadius;
@property (nonatomic) double shadowOpacity;
@property (readonly, nonatomic) BOOL usesDarkTheme;
@property (nonatomic) long long tintStyle;
@property (nonatomic) long long preferredHeaderMode;
@property (readonly, nonatomic) long long effectiveHeaderMode;
@property (nonatomic) double transitionProgress;
@property (nonatomic) long long tabLayout;
@property (retain, nonatomic) UIView *attachedView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attachedViewReferenceRect;
@property (nonatomic) double verticalTextAlignmentAdjustment;
@property (readonly, nonatomic, getter=isAccessibilityContentSize) BOOL accessibilityContentSize;
@property (retain, nonatomic) TabSnapshotImageView *snapshotView;
@property (retain, nonatomic) TabSnapshotImageView *blankSnapshotView;
@property (retain, nonatomic) UIView *dimmingView;
@property (readonly, nonatomic) UIView *previewView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double topBackdropHeight;
@property (nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)focusEffect;
- (void)updateSnapshotWithImage:(id)a0;
- (void)insertBorrowedContentView:(id)a0 headerHeight:(double)a1;
- (BOOL)containsBorrowedContentView:(id)a0;
- (void)removeBorrowedContentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerViewFrame;
- (BOOL)headerHasFinishedAnimating;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })headerViewInsets;

@end
