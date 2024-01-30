@class UILabel, UIButton;
@protocol NCAppPickerViewFooterDelegate;

@interface NCAppPickerViewFooter : UICollectionReusableView {
    UILabel *_captionLabel;
    UIButton *_showMoreButton;
    UILabel *_footnoteLabel;
}

@property (weak, nonatomic) id<NCAppPickerViewFooterDelegate> delegate;

+ (id)reuseIdentifier;
+ (id)_footnoteText;
+ (id)_showMoreButtonText;
+ (id)_showMoreButtonFont;
+ (id)_footnoteFont;
+ (double)preferredHeightForWidth:(double)a0 showMoreButton:(BOOL)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_showMoreButtonPressed:(id)a0;
- (void)configureWithShowMoreButton:(BOOL)a0 delegate:(id)a1;

@end
