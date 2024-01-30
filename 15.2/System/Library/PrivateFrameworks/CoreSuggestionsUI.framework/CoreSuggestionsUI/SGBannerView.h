@class NSLayoutXAxisAnchor, NSString, _TtC17CoreSuggestionsUI15SGBannerContent, NSArray, SGSuggestionStore, _TtC17CoreSuggestionsUI26SGBannerContentHostingView, NSAttributedString;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface SGBannerView : UIView <SGBannerProtocol>

@property (readonly, nonatomic) _TtC17CoreSuggestionsUI26SGBannerContentHostingView *bannerHostingView;
@property (retain, nonatomic) _TtC17CoreSuggestionsUI15SGBannerContent *banner;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) long long accessoryType;
@property (copy, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) id<SGSuggestionDelegate> delegate;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (nonatomic) long long actionButtonType;
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverSourceRect;
- (double)actionButtonLeadingEdgeOffset;

@end
