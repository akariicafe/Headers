@class NSString, UIImage;

@interface TVImageDescription : TVViewDescription

@property (nonatomic) BOOL needsRoomBannerImageDecorator;
@property (nonatomic) BOOL isInBackgroundOrBanner;
@property (nonatomic) BOOL hasGradient;
@property (copy, nonatomic) NSString *accessibilityText;
@property (copy, nonatomic) NSString *siriData;
@property (retain, nonatomic) id imageProxy;
@property (nonatomic) BOOL configureForMetrics;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) long long semanticContentAttribute;

- (void).cxx_destruct;
- (id)initWithProxy:(id)a0 andPlaceHolderImage:(id)a1;

@end
