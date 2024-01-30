@class UILabel, NSString, NSLayoutConstraint;

@interface MiroTitleSubtitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) double titleFontSize;
@property (nonatomic) BOOL titleShouldCapitalize;
@property (nonatomic) double titleStroke;
@property (nonatomic) double titleTracking;
@property (nonatomic) double titleSpaceTracking;
@property (nonatomic) double titleBaselineDistance;
@property (nonatomic) double titleOffset;
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleCenterXConstraint;
@property (retain, nonatomic) NSString *subtitleFontName;
@property (nonatomic) double subtitleFontSize;
@property (nonatomic) BOOL subtitleShouldCapitalize;
@property (nonatomic) double subtitleStroke;
@property (nonatomic) double subtitleTracking;
@property (nonatomic) double subtitleSpaceTracking;
@property (retain, nonatomic) NSLayoutConstraint *subtitleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleCenterXConstraint;
@property (nonatomic) double titleScale;
@property (retain, nonatomic) NSString *titleFontName;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;

- (id)titleFont;
- (id)subtitleFont;
- (void).cxx_destruct;
- (double)titleLineHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)subtitleLineHeight;
- (void)makeSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (long long)titleLineCount;
- (struct CGSize { double x0; double x1; })aspectCorrectedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (double)maxWidthForDisplayForSize:(struct CGSize { double x0; double x1; })a0;
- (double)maxHeightForDisplayForSize:(struct CGSize { double x0; double x1; })a0;
- (double)initialTitleMultiplierWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)emulatePhotosTitleStylesWithSize:(struct CGSize { double x0; double x1; })a0 multiplier:(double)a1;
- (id)attributedTitleString;
- (double)initialSubtitleMultiplierWithSize:(struct CGSize { double x0; double x1; })a0 titleMultiplier:(double)a1;
- (void)emulatePhotosSubtitleStylesWithSize:(struct CGSize { double x0; double x1; })a0 multiplier:(double)a1;
- (id)attributedSubTitleString;
- (double)titleTotalHeight;
- (double)titleLineAscender;
- (double)subtitleTotalHeight;
- (double)titleLineLeading;
- (double)titleLineDesenderHeight;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize { double x0; double x1; })a0;

@end
