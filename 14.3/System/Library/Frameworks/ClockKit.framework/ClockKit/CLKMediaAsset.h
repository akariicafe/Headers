@class CLKVideo, UIImage, CLKDevice;

@interface CLKMediaAsset : NSObject <NSCopying> {
    CLKDevice *_device;
}

@property (readonly, nonatomic) CLKVideo *video;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) double stillDisplayTime;

+ (id)mediaAssetWithVideo:(id)a0 image:(id)a1 videoDuration:(double)a2 stillDisplayTime:(double)a3 forDevice:(id)a4;
+ (id)mediaAssetWithImage:(id)a0 forDevice:(id)a1;
+ (id)mediaAssetWithVideo:(id)a0 image:(id)a1 forDevice:(id)a2;
+ (id)mediaAssetWithVideoAndImageNamed:(id)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithImage:(id)a0 forDevice:(id)a1;
- (id)initWithVideo:(id)a0 image:(id)a1 forDevice:(id)a2;
- (id)initWithVideo:(id)a0 image:(id)a1 videoDuration:(double)a2 stillDisplayTime:(double)a3 forDevice:(id)a4;

@end
