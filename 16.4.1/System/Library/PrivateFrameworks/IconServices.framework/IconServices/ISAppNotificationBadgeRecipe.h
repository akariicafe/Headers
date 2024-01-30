@class NSString;

@interface ISAppNotificationBadgeRecipe : NSObject <ISCompositorRecipe>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)hintedBadgeRect;
- (id)hintedMaskRect;

@end
