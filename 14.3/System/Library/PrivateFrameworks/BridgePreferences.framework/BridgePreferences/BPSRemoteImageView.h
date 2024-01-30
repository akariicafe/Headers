@class NSString;

@interface BPSRemoteImageView : UIImageView

@property (copy, nonatomic) NSString *desiredImageName;
@property (copy, nonatomic) NSString *fallbackImageName;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateImagesWithAnimation:(BOOL)a0;

@end
