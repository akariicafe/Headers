@class UIImage, NTKPhoto;

@interface NTKCachedPhoto : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NTKPhoto *photo;
@property (readonly, nonatomic) long long index;

- (id)initWithPhoto:(id)a0;
- (void).cxx_destruct;
- (BOOL)load;
- (id)initWithPhoto:(id)a0 index:(long long)a1;

@end
