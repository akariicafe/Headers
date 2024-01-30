@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildResult;
- (id)buildImageCardSection;
- (id)oneUpPhotoCard;
- (id)buildInlineCardSections;

@end
