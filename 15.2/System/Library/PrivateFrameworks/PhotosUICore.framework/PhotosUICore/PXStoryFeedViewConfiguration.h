@class PXStoryFeedConfiguration, UIViewController, PXExtendedTraitCollection;

@interface PXStoryFeedViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXStoryFeedConfiguration *feedConfiguration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UIViewController *containerViewController;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeedConfiguration:(id)a0 extendedTraitCollection:(id)a1;

@end
