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

- (id)initWithNotificationRequest:(id)a0;
- (id)_title;
- (id)_subtitleFont;
- (id)_titleFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dateLabelDidChange:(id)a0;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_subTitle;
- (BOOL)_hasSubtitle;
- (id)_boundedTraitCollectionForLabelFont;
- (id)_defaultRelevanceDateFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_iconImageInsets;
- (void)_layoutForButton:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_reloadDisplayPropertiesIfNecessary;
- (void)_setRelevanceDate:(id)a0 allDay:(BOOL)a1 timeZone:(id)a2;
- (BOOL)_shouldShowOKButton;
- (void)_updateButtonStates;
- (void)invalidateDisplayProperties;
- (void)updateRequestToInstance:(id)a0;

@end
