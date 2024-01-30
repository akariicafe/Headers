@class UIButton, UIView, MUAmenityListSectionConfiguration;

@interface MUAmenityListSectionView : MUPlaceVerticalCardContainerView {
    MUAmenityListSectionConfiguration *_configuration;
    UIButton *_moreButton;
    UIView *_applePayAmenityRowView;
    UIView *_applePayImageView;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithAmenityListConfiguration:(id)a0;
- (void)_performExpansion;

@end
