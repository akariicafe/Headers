@class PXNonuniformTransform, NSString, UIView, PXRegionOfInterest;
@protocol PXZoomAnimationContext;

@interface _PXTransformedViewContentZoomAnimationContext : NSObject <PXZoomAnimationContext>

@property (readonly, nonatomic) UIView *transformedView;
@property (readonly, nonatomic) id<PXZoomAnimationContext> context;
@property (readonly, nonatomic) long long animationType;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) double fromAlpha;
@property (readonly, nonatomic) PXNonuniformTransform *fromTransform;
@property (readonly, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property (readonly, nonatomic) double toAlpha;
@property (readonly, nonatomic) PXNonuniformTransform *toTransform;
@property (readonly, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property (readonly, nonatomic, getter=isMatchingRegionsOfInterest) BOOL matchingRegionsOfInterest;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didEndAnimation:(long long)a0;
- (long long)willBeginAnimation;
- (void)registerCleanupHandler:(id /* block */)a0;
- (id)initWithTransformedView:(id)a0 context:(id)a1;

@end
