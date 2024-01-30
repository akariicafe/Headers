@class UIImage;

@interface ICThumbnailData : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) BOOL showAsFileIcon;
@property (nonatomic) BOOL isMovie;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 imageScaling:(unsigned long long)a1 showAsFileIcon:(BOOL)a2 isMovie:(BOOL)a3;

@end
