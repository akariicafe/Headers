@class UIColor, NSString;

@interface TVRatingBadgeLayout : TVViewLayout

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) NSString *ratingStyle;
@property (retain, nonatomic) NSString *ratingStyleAXSmall;
@property (retain, nonatomic) NSString *ratingStyleAXLarge;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double interitemSpacingAXSmall;
@property (nonatomic) double interitemSpacingAXLarge;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (void).cxx_destruct;

@end
