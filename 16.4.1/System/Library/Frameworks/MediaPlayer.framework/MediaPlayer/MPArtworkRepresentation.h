@class UIImage, AVAsset, NSString;

@interface MPArtworkRepresentation : NSObject

@property (nonatomic) long long kind;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isImagePrepared) BOOL imagePrepared;
@property (retain, nonatomic) AVAsset *video;
@property (nonatomic) struct CGSize { double width; double height; } representationSize;
@property (retain, nonatomic) id representationToken;
@property (readonly, copy, nonatomic) NSString *visualIdenticalityStringRepresentation;

+ (id)representationWithSize:(struct CGSize { double x0; double x1; })a0 video:(id)a1;
+ (id)representationWithSize:(struct CGSize { double x0; double x1; })a0 image:(id)a1;
+ (id)representationForVisualIdentity:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 image:(id)a2;
+ (id)representationForVisualIdentity:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 video:(id)a2;

- (id)representationWithPreparedImage:(id)a0;
- (id)debugQuickLookObject;
- (void).cxx_destruct;

@end
