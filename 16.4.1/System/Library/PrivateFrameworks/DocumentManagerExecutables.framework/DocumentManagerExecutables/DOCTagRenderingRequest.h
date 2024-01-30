@class NSArray, UIColor, UITraitCollection;

@interface DOCTagRenderingRequest : NSObject

@property (nonatomic) double tagDimension;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *fillColors;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) UIColor *ringColor;
@property (retain, nonatomic) UIColor *selectionOutlineColor;
@property (nonatomic) unsigned long long clearTagRenderingMode;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) double knockOutBorderWidth;
@property (nonatomic) unsigned long long spacingType;

+ (id)requestForChainedTags:(id)a0 tagDimension:(double)a1;
+ (id)requestForTag:(id)a0 tagDimension:(double)a1;
+ (id)requestWithTagDimension:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_UIImageCacheKeyWithAdditionalComponents:(id)a0;

@end
