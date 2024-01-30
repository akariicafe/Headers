@class UIViewController, CKInteractiveBalloonImageView, IMBalloonPluginDataSource, NSString, UIView, CKBalloonImageView;
@protocol CKTranscriptPluginView;

@interface CKTranscriptPluginBalloonView : CKBalloonView <CKTranscriptPluginViewDelegate> {
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
}

@property (retain, nonatomic) CKInteractiveBalloonImageView *tailMask;
@property (retain, nonatomic) CKBalloonImageView *outlineMask;
@property (retain, nonatomic) UIView *pluginSnapshotView;
@property (nonatomic) BOOL suppressMask;
@property (weak, nonatomic) UIViewController *pluginViewController;
@property (retain, nonatomic) UIView<CKTranscriptPluginView> *pluginView;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (nonatomic) BOOL isInteractive;
@property (retain, nonatomic) UIView *pluginSnapshotViewForThrowAnimation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } maskFrame;
@property (readonly, nonatomic) BOOL shouldMaskWhenOpaque;
@property (nonatomic) BOOL mayReparentPluginViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)userInterfaceLevel;
- (void)prepareForDisplay;
- (long long)userInterfaceStyle;
- (void)willRemoveSubview:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)clearFilters;
- (void).cxx_destruct;
- (void)setUserInterfaceLevel:(long long)a0;
- (id)imageForInvisibleInkEffectView;
- (void)setUserInterfaceStyle:(long long)a0;
- (void)addFilter:(id)a0;
- (void)configureForComposition:(id)a0;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (BOOL)canUseOpaqueMask;
- (void)setCanUseOpaqueMask:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBalloonMasks;
- (void)_pluginViewReadyForSnapshot:(id)a0;
- (void)pluginViewRequestsPresentationAction:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)overlayColor;
- (void)configureForTranscriptPlugin:(id)a0 context:(id)a1;

@end
