@class NSArray, NSString;

@interface PISegmentationLayoutRegions : NSObject <PFParallaxAssetRegions>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (readonly, nonatomic) NSArray *faceRegions;
@property (readonly, nonatomic) NSArray *petRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryFromRegions:(id)a0;
+ (id)regionsFromDictionary:(id)a0 error:(out id *)a1;

@end
