@class NSArray, UIImage, VUIScoreboardLayout;
@protocol VUIScorecardViewDelegate;

@interface VUIScorecardView : UIView

@property (nonatomic) BOOL didCalculatedSize;
@property (nonatomic) struct CGSize { double width; double height; } scorecardSize;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) NSArray *rowScoreValueSizes;
@property (retain, nonatomic) NSArray *columnWidths;
@property (retain, nonatomic) NSArray *rowHeights;
@property (retain, nonatomic) UIImage *darkMaterialImage;
@property (nonatomic) BOOL delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property (nonatomic) BOOL delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
@property (weak, nonatomic) id<VUIScorecardViewDelegate> delegate;
@property (retain, nonatomic) VUIScoreboardLayout *scoreboardLayout;

- (void).cxx_destruct;
- (void)invalidateData;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_calculateMetricsOfScorecard;
- (void)_calculateColumnSpacing;

@end
