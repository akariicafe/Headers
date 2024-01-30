@class VUIProductUberBackgroundViewLayout, TVImageLayout, VUITextLayout;

@interface VUISportsProductBannerLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *titleTextLayout;
@property (readonly, nonatomic) VUITextLayout *rowTextLayout;
@property (readonly, nonatomic) VUITextLayout *scoreTextLayout;
@property (readonly, nonatomic) VUITextLayout *losingRowTextLayout;
@property (readonly, nonatomic) VUITextLayout *losingScoreTextLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionTextLayout;
@property (readonly, nonatomic) VUITextLayout *footerTextLayout;
@property (readonly, nonatomic) VUITextLayout *availabilityTextLayout;
@property (readonly, nonatomic) TVImageLayout *availabilityImageLayout;
@property (readonly, nonatomic) VUIProductUberBackgroundViewLayout *uberBackgroundViewLayout;

+ (BOOL)shouldUseVerticalLayout;
+ (BOOL)shouldDisplayScoresBelowLabels;
+ (id)layoutWithLayout:(id)a0 element:(id)a1 sizeClass:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSizeClass:(long long)a0;

@end
