@class UIView, NSString, NSArray, UIImage, TabThumbnailCloseButton, SFAvatarStackView, TabThumbnailRecordingIndicator, TabSnapshotImageView, _SFBarTheme, TabIconAndTitleView;

@interface TabOverviewItemView : UIView {
    double _borrowedContentHeaderHeight;
    UIView *_borrowedContentView;
    BOOL _contentSizeIsAccessibilityCategory;
    UIView *_contentView;
    UIView *_headerBackgroundView;
    SFAvatarStackView *_participantsView;
    UIView *_participantsBackgroundView;
    UIView *_pinnedFillView;
    UIView *_placeholderView;
    long long _preferredHeaderMode;
    TabThumbnailRecordingIndicator *_recordingIndicatorView;
    UIView *_snapshotClipperView;
    UIView *_shadowView;
    TabIconAndTitleView *_titleView;
}

@property (readonly, nonatomic) TabThumbnailCloseButton *closeButton;
@property (nonatomic) BOOL showsCloseButton;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSArray *shareParticipants;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } titlePadding;
@property (nonatomic) double shadowOpacity;
@property (retain, nonatomic) _SFBarTheme *topBarTheme;
@property (nonatomic) double transitionProgress;
@property (nonatomic) long long tabLayout;
@property (retain, nonatomic) UIView *attachedView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attachedViewReferenceRect;
@property (retain, nonatomic) TabSnapshotImageView *snapshotView;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic, getter=previewViewIsHidden) BOOL previewViewHidden;
@property (readonly, nonatomic) UIView *previewView;
@property (nonatomic) BOOL wasUsedForPreviewing;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double topBackdropHeight;
@property (nonatomic) double additionalTopBackdropHeight;
@property (nonatomic) struct CGSize { double width; double height; } windowSize;

+ (void)initialize;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)focusEffect;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)_headerBackgroundColor;
- (void)_updateContentSizeCategory;
- (BOOL)containsBorrowedContentView:(id)a0;
- (long long)effectiveHeaderMode;
- (void)insertBorrowedContentView:(id)a0 headerHeight:(double)a1;
- (void)removeBorrowedContentView:(id)a0;
- (void)updateSnapshotWithImage:(id)a0;

@end
