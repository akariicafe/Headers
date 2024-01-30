@class UIFont, NSString, UIImage, UIView, TabIconAndTitleView, UIButton, NSObject, UIColor;
@protocol OS_dispatch_queue;

@interface TabThumbnailView : UIView {
    UIView *_headerView;
    UIView *_headerBackgroundView;
    TabIconAndTitleView *_iconAndTitleView;
    NSObject<OS_dispatch_queue> *_titleMeasurementQueue;
    struct CGSize { double width; double height; } _titleSize;
    double _headerViewAlpha;
    double _headerBackgroundViewAlpha;
    BOOL _titleTextNeedsUpdate;
}

@property (readonly, nonatomic) UIView *headerBackgroundView;
@property (readonly, nonatomic) UIColor *headerBackgroundColor;
@property (readonly, nonatomic) UIImage *closeButtonImage;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIView *snapshotClipperView;
@property (readonly, nonatomic) UIView *blankSnapshotView;
@property (nonatomic) BOOL headerHasFinishedAnimating;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerViewInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerBackgroundViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerViewFrame;
@property (retain, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) BOOL titleIsHorizontallyCentered;
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
@property (nonatomic) double headerCornerRadius;
@property (readonly, nonatomic) BOOL usesDarkTheme;
@property (nonatomic) long long tintStyle;
@property (nonatomic) long long preferredHeaderMode;
@property (readonly, nonatomic) long long effectiveHeaderMode;
@property (nonatomic) double verticalTextAlignmentAdjustment;
@property (readonly, nonatomic, getter=isAccessibilityContentSize) BOOL accessibilityContentSize;
@property (copy, nonatomic) id /* block */ layoutAnimator;

+ (void)setShowsIconsInTabs:(BOOL)a0;
+ (double)titleHeightForAccessibilityContentSize:(BOOL)a0;
+ (id)titleFontForTraitCollection:(id)a0;

- (void)layoutSubviews;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateHeaderView;
- (void)_setHeaderColorScheme;

@end
