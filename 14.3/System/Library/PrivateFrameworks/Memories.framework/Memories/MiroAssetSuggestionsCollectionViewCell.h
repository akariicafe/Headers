@class NSArray, UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface MiroAssetSuggestionsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (weak, nonatomic) UIView *debugView;
@property (weak, nonatomic) UIView *debugGradient;
@property (weak, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorTrailingConstraint;
@property (retain, nonatomic) UIView *selectionIndicator;
@property (retain, nonatomic) UIView *selectionIndicatorImageView;
@property (retain, nonatomic) NSArray *debugLabels;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) UIView *videoIndicator;
@property (retain, nonatomic) UIView *slomoIndicator;
@property (retain, nonatomic) UILabel *slomoDurationLabel;
@property (retain, nonatomic) UIView *timelapseIndicator;
@property (retain, nonatomic) UILabel *timelapseDurationLabel;
@property BOOL isKeyAssetPicker;

+ (id)circularGlyphViewWithName:(id)a0 backgroundColor:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)configureWithAsset:(id)a0 selected:(BOOL)a1;

@end
