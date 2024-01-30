@class NSString, UILabel;

@interface PXSearchTapToRadarFooter : UICollectionReusableView

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UILabel *tapToRadarAppleInternalLabel;
@property (retain, nonatomic) UILabel *tapToRadarDescriptionLabel;
@property (copy, nonatomic) id /* block */ tapToRadarHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_didSelectTapToRadarButton;
- (void)shouldDisplayRadarDescriptionLabel:(BOOL)a0;

@end
