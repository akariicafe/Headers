@class CKStandardButton, NSString, UILabel, UIMenu;

@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) CKStandardButton *button;
@property (retain, nonatomic) UILabel *timeRemainingLabel;
@property (copy, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL showOfferTimeRemaining;
@property (nonatomic) double offerTimeRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;
+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)timeStringForTimeInterval:(double)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
