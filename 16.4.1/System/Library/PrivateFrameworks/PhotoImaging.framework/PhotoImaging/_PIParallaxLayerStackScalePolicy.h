@class NSString, PFParallaxLayout;

@interface _PIParallaxLayerStackScalePolicy : NSObject <NUScalePolicy>

@property (readonly, nonatomic) PFParallaxLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayout:(id)a0;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; })scaleForImageSize:(struct { long long x0; long long x1; })a0;

@end
