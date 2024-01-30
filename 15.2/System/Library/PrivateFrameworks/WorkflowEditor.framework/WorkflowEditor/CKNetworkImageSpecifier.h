@class NSURL, UIImage;
@protocol CKNetworkImageDownloading;

@interface CKNetworkImageSpecifier : NSObject

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) UIImage *defaultImage;
@property (readonly, nonatomic) id<CKNetworkImageDownloading> imageDownloader;
@property (readonly, nonatomic) id scenePath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 defaultImage:(id)a1 imageDownloader:(id)a2 scenePath:(id)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
