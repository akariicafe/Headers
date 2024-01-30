@class UIColor, NSArray, CLKVideo, UIImage, NSString, CLKDevice;

@interface NTKVideoPlayerListing : NSObject <NTKAVListing, NSCopying> {
    CLKDevice *_device;
    CLKVideo *_video;
    NSString *_filename;
    UIImage *_image;
}

@property (retain, nonatomic) NSArray *attributes;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long endBehavior;
@property (readonly, nonatomic) CLKVideo *video;
@property (readonly, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listingForDevice:(id)a0 withFilename:(id)a1;
+ (id)listingForDevice:(id)a0 withFilename:(id)a1 andColor:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)snapshotDiffers:(id)a0;
- (void)discardAssets;
- (id)initForDevice:(id)a0 withFilename:(id)a1;

@end
