@class UIListContentView, NSString, UIImageView, PKLinkedApplication, UILabel, PKAccountEnhancedMerchant, UIButton;
@protocol PKEnhancedMerchantCellDelegate;

@interface PKEnhancedMerchantCollectionViewListCell : UICollectionViewListCell <PKLinkedApplicationObserver> {
    id<PKEnhancedMerchantCellDelegate> _delegate;
    PKLinkedApplication *_linkedApplication;
}

@property (readonly, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIListContentView *listContentView;
@property (retain, nonatomic) UILabel *detailedDescriptionLabel;
@property (retain, nonatomic) UIButton *appStoreButton;
@property (retain, nonatomic) UIButton *websiteButton;
@property (retain, nonatomic) UIButton *mapsButton;
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)_buttonFont;
- (id)_visibleButtons;
- (id)_buttonAttributedStringForString:(id)a0;
- (void)_dispatchActionToDelegate:(long long)a0;
- (void)_initializeViewsIfNecessary;
- (void)_updateAppStoreButtonBasedOnLinkedApplicationState;
- (void)_updateImageViewDynamicColors;
- (void)linkedApplicationDidChangeState:(id)a0;
- (void)updateWithAccountEnhancedMerchant:(id)a0;

@end
