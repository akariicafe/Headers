@class UIColor, CAFilter, UIImage, NSAttributedString;

@interface SKUIItemOfferButtonProperties : NSObject

@property (nonatomic) BOOL hasBorderView;
@property (retain, nonatomic) UIColor *borderBackgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) CAFilter *borderCompositingFilter;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderCornerRadius;
@property (nonatomic) BOOL borderCornerRadiusMatchesHalfBoundingDimension;
@property (nonatomic) BOOL hasTitleLabel;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL universal;
@property (nonatomic) long long confirmationTitleStyle;
@property (nonatomic) long long titleStyle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *borderedImage;
@property (nonatomic) long long progressType;
@property (nonatomic) BOOL progressIndeterminate;
@property (nonatomic) double progress;
@property (nonatomic) BOOL cancelRecognizer;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL restores;

- (void).cxx_destruct;

@end
