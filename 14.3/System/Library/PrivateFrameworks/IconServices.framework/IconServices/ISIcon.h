@class NSString, ISIconManager, NSArray;
@protocol ISIconIdentity;

@interface ISIcon : NSObject <ISScalableCompositorResource, CALayerDelegate>

@property (readonly) id<ISIconIdentity> _identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) ISIconManager *manager;
@property (readonly, nonatomic) NSArray *decorations;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)layerUpdateQueue;
+ (id)sizesFromSet:(unsigned long long)a0;
+ (id)transparentIcon;
+ (id)genericDocumentIcon;
+ (struct _LIIconVariantInfo { int x0; struct CGSize { double x0; double x1; } x1; double x2; unsigned long long x3; char *x4; })variantInfoForVariant:(int)a0;
+ (struct _LIIconVariantInfo { int x0; struct CGSize { double x0; double x1; } x1; double x2; unsigned long long x3; char *x4; } *)variantInfoForSet:(unsigned long long)a0 count:(unsigned long long *)a1;
+ (id)applicationIcon;
+ (int)findVariantFromSet:(unsigned long long)a0 deviceIdiom:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
+ (id)genericApplicationIcon;

- (double)_aspectRatio;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)variantOptions;
- (id)iconWithDecorations:(id)a0;
- (void)displayLayer:(id)a0;
- (id)_init;
- (unsigned long long)badgeOptions;

@end
