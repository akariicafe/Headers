@class SGSuggestionAction, NSString, NSArray, NSAttributedString, NSLayoutXAxisAnchor, SGBannerDividerParameter, SGSuggestionStore, _TtC17CoreSuggestionsUI26SGBannerContentHostingView, UIVisualEffectView, _TtC17CoreSuggestionsUI15SGBannerContent, UIColor;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface SGBannerView : UIView <SGBannerProtocol>

@property (readonly, nonatomic) _TtC17CoreSuggestionsUI26SGBannerContentHostingView *bannerHostingView;
@property (retain, nonatomic) _TtC17CoreSuggestionsUI15SGBannerContent *banner;
@property (nonatomic) BOOL orientationChanged;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *imageSGViews;
@property (nonatomic) long long accessoryType;
@property (copy, nonatomic) SGSuggestionAction *primaryAction;
@property (copy, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) id<SGSuggestionDelegate> delegate;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (nonatomic) long long actionButtonType;
@property (nonatomic) BOOL suggestionCategorySupportsBatchDismissal;
@property (copy, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (nonatomic) double closeButtonXAnchorOffset;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) SGBannerDividerParameter *bannerDivider;
@property (copy, nonatomic) SGSuggestionAction *dismissAction;
@property (nonatomic) BOOL prominentActionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)reload;
- (void)willMoveToWindow:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverSourceRect;
- (double)actionButtonLeadingEdgeOffset;
- (void)forceReloadBannerView:(id)a0;
- (void)invalidateBannerView;
- (void)invalidateReloadBannerView:(id)a0;

@end
