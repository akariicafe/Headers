@class NSArray, NSString, PXStoryExportOrientation;

@interface PXStoryExportAspectRatio : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *standardAspects;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) double ratio;
@property (readonly, nonatomic) PXStoryExportOrientation *orientation;

+ (id)standardAspectRatioForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)pickableAspectRatiosForOrientation:(id)a0 fullSizePlayerAspect:(id)a1;
+ (void)setDefaultAspectRatio:(id)a0;
+ (id)defaultAspectRatioWithFullSizePlayerAspect:(id)a0 orientation:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAspectType:(long long)a0;
- (id)initWithAspectType:(long long)a0 ratio:(double)a1;
- (struct CGSize { double x0; double x1; })sizeWithMinDimension:(double)a0 orientation:(id)a1;
- (struct CGSize { double x0; double x1; })sizeWithMinDimension:(double)a0;
- (id)adjustedForOrientation:(id)a0;
- (id)_userDefaultIdentifier;

@end
