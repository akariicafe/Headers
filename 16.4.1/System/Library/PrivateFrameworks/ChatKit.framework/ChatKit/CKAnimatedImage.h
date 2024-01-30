@class NSString, UIImage, NSArray;

@interface CKAnimatedImage : NSObject <IMAnimatedImageProtocol>

@property (class, readonly, nonatomic) NSString *filenameExtension;

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *durations;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;

+ (id)imageWithContentsOfCPBitmapURL:(id)a0;
+ (id)ASTCDataForImagesWithDurations:(id)a0 imageProvider:(id /* block */)a1;
+ (BOOL)_writeImagesWithDurations:(id)a0 toCPBitmapURL:(id)a1 imageProvider:(id /* block */)a2 frameProcessor:(id /* block */)a3;
+ (BOOL)_writeImagesWithDurations:(id)a0 toOutputStream:(id)a1 imageProvider:(id /* block */)a2 frameProcessor:(id /* block */)a3;
+ (id)animatedImageWithASTCData:(id)a0;
+ (id)animatedImageWithContentsOfASTCURL:(id)a0;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)a0;
+ (BOOL)writeImagesWithDurations:(id)a0 toASTCURL:(id)a1 imageProvider:(id /* block */)a2;
+ (BOOL)writeImagesWithDurations:(id)a0 toASTCURL:(id)a1 imageProvider:(id /* block */)a2 frameProcessor:(id /* block */)a3;
+ (BOOL)writeImagesWithDurations:(id)a0 toCPBitmapURL:(id)a1 imageProvider:(id /* block */)a2;
+ (BOOL)writeImagesWithDurations:(id)a0 toCPBitmapURL:(id)a1 imageProvider:(id /* block */)a2 frameProcessor:(id /* block */)a3;

- (id)frames;
- (id)description;
- (void).cxx_destruct;
- (BOOL)writeToASTCURL:(id)a0;
- (id)_initWithImage:(id)a0 durations:(id)a1;
- (id)initWithImages:(id)a0 durations:(id)a1;
- (BOOL)writeToCPBitmapURL:(id)a0;

@end
