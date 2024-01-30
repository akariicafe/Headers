@class UIImage, AVAsset;

@interface MPArtworkRepresentation : NSObject

@property (nonatomic) long long kind;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *video;
@property (nonatomic) struct CGSize { double width; double height; } representationSize;
@property (retain, nonatomic) id representationToken;

+ (id)representationWithSize:(struct CGSize { double x0; double x1; })a0 image:(id)a1;
+ (id)representationWithSize:(struct CGSize { double x0; double x1; })a0 video:(id)a1;

- (id)debugQuickLookObject;
- (void).cxx_destruct;

@end
