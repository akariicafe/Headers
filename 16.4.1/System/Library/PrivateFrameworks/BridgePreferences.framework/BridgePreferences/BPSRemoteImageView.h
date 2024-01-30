@class NSString;

@interface BPSRemoteImageView : UIImageView

@property (copy, nonatomic) NSString *desiredImageName;
@property (copy, nonatomic) NSString *fallbackImageName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateImagesWithAnimation;
- (void)updateImagesWithAnimation:(BOOL)a0;

@end
