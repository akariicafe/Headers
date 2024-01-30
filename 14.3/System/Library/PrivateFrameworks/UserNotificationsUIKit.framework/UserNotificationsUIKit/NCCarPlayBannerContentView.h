@class CPUIBannerViewButton, NSString, NSArray, NCNotificationRequest, UILabel;
@protocol NCCarPlayBannerContentViewDelegate, BSUIDateLabel;

@interface NCCarPlayBannerContentView : UIView <BSUIDateLabelDelegate> {
    BOOL _displayPropertiesValid;
    NSArray *_iconImageViews;
    UILabel *_titleLabel;
    double _titleAscender;
    UILabel *_subTitleLabel;
    double _subTitleAscender;
    CPUIBannerViewButton *_okButton;
    CPUIBannerViewButton *_actionButton;
    UILabel<BSUIDateLabel> *_relevanceDateLabel;
}

@property (readonly, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCCarPlayBannerContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)_title;
- (id)_subtitleFont;
- (id)_subTitle;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_hasSubtitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dateLabelDidChange:(id)a0;
- (id)initWithNotificationRequest:(id)a0;
- (void)_updateButtonStates;
- (void)_setRelevanceDate:(id)a0 allDay:(BOOL)a1 timeZone:(id)a2;
- (void)invalidateDisplayProperties;
- (void)_reloadDisplayPropertiesIfNecessary;
- (BOOL)_shouldShowOKButton;
- (void)_layoutForButton:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_iconImageInsets;
- (id)_defaultRelevanceDateFont;
- (id)_boundedTraitCollectionForLabelFont;
- (void)updateRequestToInstance:(id)a0;

@end
