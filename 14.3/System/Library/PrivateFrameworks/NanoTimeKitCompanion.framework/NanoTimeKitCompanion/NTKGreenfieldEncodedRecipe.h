@class NSURL, UIImage, NSString;

@interface NTKGreenfieldEncodedRecipe : NSObject

@property (retain, nonatomic) NSURL *watchFaceDataUrl;
@property (retain, nonatomic) UIImage *watchFaceImage;
@property (retain, nonatomic) NSString *watchFaceName;

- (void).cxx_destruct;
- (id)initWithWatchFaceDataUrl:(id)a0 watchFaceImage:(id)a1 watchFaceName:(id)a2;

@end
