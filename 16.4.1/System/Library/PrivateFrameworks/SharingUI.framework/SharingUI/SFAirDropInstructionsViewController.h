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

- (void)updatePreferredContentSize;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 preferredSizeForItemAtIndexPath:(id)a2;
- (void)_updateFontSizes;
- (id)_airDropText;
- (struct CGSize { double x0; double x1; })_cachedPreferredItemSize;
- (id)_fontWithStyle:(id)a0 maxSizeCategory:(id)a1 traits:(unsigned int)a2;
- (id)_instructionsBaseFormatString;
- (id)_instructionsText;
- (void)_layoutiOSSubviews;
- (double)_titleLabelHeight;
- (id)attributedStringWithTitle:(id)a0 content:(id)a1;

@end
