@class UITextView, NSString, SFAirDropActiveIconView, SFCollectionViewLayout;

@interface SFAirDropInstructionsViewController : UIViewController <SFCollectionViewDelegateLayout> {
    SFCollectionViewLayout *_collectionViewLayout;
    struct CGSize { double width; double height; } _minimumPreferredContentSize;
}

@property (readonly, nonatomic) UITextView *instructionsTextView;
@property (readonly, nonatomic) SFAirDropActiveIconView *airDropActiveIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 preferredSizeForItemAtIndexPath:(id)a2;
- (void)_updateFontSizes;
- (void)viewDidLayoutSubviews;
- (void)updatePreferredContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)attributedStringWithTitle:(id)a0 content:(id)a1;
- (id)_fontWithStyle:(id)a0 maxSizeCategory:(id)a1 traits:(unsigned int)a2;
- (struct CGSize { double x0; double x1; })_cachedPreferredItemSize;
- (id)_airDropText;
- (void)_layoutiOSSubviews;
- (double)_titleLabelHeight;
- (id)_instructionsText;
- (id)_instructionsBaseFormatString;

@end
