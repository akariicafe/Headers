@class NSString, NSURL, NSData, CIImage;

@interface PVImage : NSObject

@property (readonly, nonatomic) unsigned long long assetWidth;
@property (readonly, nonatomic) unsigned long long assetHeight;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long orientedWidth;
@property (readonly, nonatomic) unsigned long long orientedHeight;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, copy, nonatomic) id adjustmentVersion;
@property (readonly, nonatomic) NSString *groupingIdentifier;
@property (readonly, nonatomic) CIImage *CIImage;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSData *imageData;

+ (id)imageWithURL:(id)a0 assetWidth:(unsigned long long)a1 assetHeight:(unsigned long long)a2 imageCreationOptions:(id)a3 adjustmentVersion:(id)a4 creationDate:(id)a5;
+ (id)imageWithCIImage:(id)a0 assetWidth:(unsigned long long)a1 assetHeight:(unsigned long long)a2 orientation:(unsigned int)a3 adjustmentVersion:(id)a4 creationDate:(id)a5;
+ (id)imageWithData:(id)a0 imageCreationOptions:(id)a1 assetWidth:(unsigned long long)a2 assetHeight:(unsigned long long)a3 adjustmentVersion:(id)a4 creationDate:(id)a5;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 adjustmentVersion:(id)a2 creationDate:(id)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 adjustmentVersion:(id)a2 creationDate:(id)a3;
- (id)initWithCIImage:(id)a0 assetWidth:(unsigned long long)a1 assetHeight:(unsigned long long)a2 orientation:(unsigned int)a3 adjustmentVersion:(id)a4 creationDate:(id)a5;
- (id)initWithData:(id)a0 imageCreationOptions:(id)a1 assetWidth:(unsigned long long)a2 assetHeight:(unsigned long long)a3 adjustmentVersion:(id)a4 creationDate:(id)a5;
- (id)initWithURL:(id)a0 assetWidth:(unsigned long long)a1 assetHeight:(unsigned long long)a2 imageCreationOptions:(id)a3 adjustmentVersion:(id)a4 creationDate:(id)a5;

@end
