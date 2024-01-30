@class NSArray, NSMutableArray;

@interface TSWPImageBulletProvider : NSObject {
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property (readonly, nonatomic) NSArray *predefinedImages;

+ (id)sharedInstance;

- (id)p_predefinedImageNames;
- (id)p_pathToPredefinedImages;
- (id)dataForImageBullet:(id)a0 withContext:(id)a1;
- (id)dataForDefaultImageBulletWithContext:(id)a0;

@end
