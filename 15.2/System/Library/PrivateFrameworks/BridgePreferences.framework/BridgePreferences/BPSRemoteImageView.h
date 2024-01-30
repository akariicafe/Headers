@class NSString;

@interface BPSRemoteImageView : UIImageView

@property (copy, nonatomic) NSString *desiredImageName;
@property (copy, nonatomic) NSString *fallbackImageName;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateImagesWithAnimation:(BOOL)a0;

@end
