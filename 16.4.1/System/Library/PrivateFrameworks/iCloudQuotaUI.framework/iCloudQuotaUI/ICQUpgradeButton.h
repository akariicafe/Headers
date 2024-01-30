@class ICQLink, ICQOffer, NSAttributedString;

@interface ICQUpgradeButton : UIButton {
    ICQOffer *_offer;
}

@property (retain, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) ICQLink *link;
@property (readonly, nonatomic) NSAttributedString *attributedDetailedText;
@property (readonly, nonatomic) NSAttributedString *attributedDetailedLink;

+ (id)buttonWithType:(long long)a0;
+ (BOOL)shouldShowForOffer:(id)a0;
+ (BOOL)shouldShowForPremiumOffer:(id)a0;
+ (id)attributedStringWithFormat:(id)a0 attributes:(id)a1 buttonLinkAttributes:(id)a2 links:(id)a3;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)a0;
+ (id)upgradeButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)buttonAttributes;
- (id)buttonLinkAttributes;

@end
