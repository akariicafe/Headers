@class NSArray, NSMutableArray;

@interface TSWPImageBulletProvider : NSObject {
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property (readonly, nonatomic) NSArray *predefinedImages;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)p_predefinedImageNames;
- (id)p_pathToPredefinedImages;
- (id)dataForImageBullet:(id)a0 withContext:(id)a1;
- (id)predefinedImagesWithContext:(id)a0;
- (id)predefinedImageFilenamesWithContext:(id)a0;

@end
