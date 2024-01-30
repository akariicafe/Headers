@class NSString, NSArray, NSURL;

@interface _PISegmentationNullAsset : NSObject <PFParallaxAsset>

@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (readonly, nonatomic) NSArray *faceRegions;
@property (readonly, nonatomic) NSArray *petRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsSegmentationResourceCaching;
@property (readonly, nonatomic) NSURL *segmentationResourceURL;

- (void).cxx_destruct;
- (void)cancelParallaxResourceRequest:(int)a0;
- (void)cancelPetsRegionsRequest:(int)a0;
- (int)loadParallaxResource:(long long)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)loadPetsRegions:(id /* block */)a0;
- (void)updateSegmentationResource:(id /* block */)a0;

@end
