@class UIColor, NSString, UILabel;

@interface PUCurationTripKeyAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_curationScoreLabel;
    UILabel *_aestheticScoreLabel;
    UILabel *_promotionScoreLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (nonatomic) double curationScore;
@property (nonatomic) double aestheticScore;
@property (nonatomic) double promotionScore;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
