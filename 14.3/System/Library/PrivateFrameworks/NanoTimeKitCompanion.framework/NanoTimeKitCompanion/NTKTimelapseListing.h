@class CLKVideo, NSString, UIImage, NTKPhotoAnalysis, CLKDevice;

@interface NTKTimelapseListing : NSObject <NSCopying, NTKAVListing> {
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_videoName;
    NSString *_imageName;
}

@property (readonly, nonatomic) unsigned long long theme;
@property (readonly, nonatomic) long long videoIndex;
@property (readonly, nonatomic) NTKPhotoAnalysis *photoAnalysis;
@property (readonly, nonatomic) CLKVideo *video;
@property (readonly, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSimilarTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)snapshotDiffers:(id)a0;
- (void)discardAssets;
- (id)initForDevice:(id)a0 withTheme:(unsigned long long)a1 videoIndex:(long long)a2 photoAnalysis:(id)a3;
- (void)_setHasAssets;

@end
