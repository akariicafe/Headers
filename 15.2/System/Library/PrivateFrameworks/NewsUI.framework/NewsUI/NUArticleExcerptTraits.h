@class NUTrait, UITraitCollection;

@interface NUArticleExcerptTraits : NSObject <NSCopying>

@property (readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) NUTrait *headlineImageRatioTrait;
@property (retain, nonatomic) NUTrait *headlineImageMarginTrait;
@property (retain, nonatomic) NUTrait *contentMarginTrait;
@property (retain, nonatomic) NUTrait *excerptMarginTrait;
@property (retain, nonatomic) NUTrait *readMoreMinTopMarginTrait;
@property (retain, nonatomic) NUTrait *bottomMaringTrait;
@property (readonly, nonatomic) double headlineImageHeight;
@property (readonly, nonatomic) double headlineImageMargin;
@property (readonly, nonatomic) double excerptMargin;
@property (readonly, nonatomic) double contentMargin;
@property (readonly, nonatomic) double hairlineSeparatorHeight;
@property (readonly, nonatomic) double topMarginAboveHeadlineTitle;
@property (readonly, nonatomic) double topMarginAboveHeadlineDate;
@property (readonly, nonatomic) double topMarginAboveHairlineSeparator;
@property (readonly, nonatomic) double topMarginAboveExcerpt;
@property (readonly, nonatomic) double minTopMaginAboveReadMoreButton;
@property (readonly, nonatomic) double bottomMargin;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (double)contentMarginForDeviceTrait:(id)a0 delta:(double)a1;

@end
