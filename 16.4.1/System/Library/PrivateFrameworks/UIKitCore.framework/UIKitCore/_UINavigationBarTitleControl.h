@class UIView, NSString, NSArray, UIImageView, NSDictionary, UIDocumentProperties, UILayoutGuide, NSLayoutConstraint, _UITAMICAdaptorView, UILabel;
@protocol _UINavigationBarTitleControlVisualProvider;

@interface _UINavigationBarTitleControl : UIControl <_UITAMICAdaptorViewDelegate> {
    UILabel *_inlineTitleView;
    _UITAMICAdaptorView *_wrapperView;
    NSDictionary *_resolvedAttributes;
    UIImageView *_chevron;
    UILayoutGuide *_chevronGuide;
    NSLayoutConstraint *_sosConstraint;
    NSArray *_titleConstraints;
    NSArray *_inlineTitleConstraints;
    NSArray *_chevronConstraints;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) float titleViewCompressionResistancePriority;
@property (nonatomic) double contentAlpha;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIView *effectiveTitleView;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) double trailingPadding;
@property (copy, nonatomic) id /* block */ titleMenuProvider;
@property (retain, nonatomic) UIDocumentProperties *documentProperties;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } menuAlignmentInsets;
@property (retain, nonatomic) UILayoutGuide *titleLayoutGuide;
@property (retain, nonatomic) id<_UINavigationBarTitleControlVisualProvider> visualProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleMenuSuggestedActions;

- (unsigned long long)_controlEventsForActionTriggered;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)didMoveToWindow;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)_preferredSender;
- (id)viewForLastBaselineLayout;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (id)pointerShapeInContainer:(id)a0;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)_baselineView;
- (void)_cleanupWrapperView;
- (id)_debugInfo;
- (void)_ensureNecessaryViews;
- (BOOL)_inactiveForPointer;
- (void)_invalidateSceneDraggingBehavior;
- (id)_preferredPresentationSourceItem;
- (id)_preview;
- (void)_resetTitleViewConstraints;
- (void)_updateContentAlpha;
- (void)_updateInlineTitleView;
- (void)_updateInteractions;
- (struct CGSize { double x0; double x1; })availableSizeForAdaptor:(id)a0 proposedSize:(struct CGSize { double x0; double x1; })a1;

@end
