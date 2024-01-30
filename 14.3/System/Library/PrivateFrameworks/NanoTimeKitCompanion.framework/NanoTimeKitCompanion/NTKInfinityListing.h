@class CLKVideo, NTKInfinityListingAttributes, UIImage, NSString, CLKDevice;

@interface NTKInfinityListing : NSObject <NSCopying, NTKAVListing> {
    CLKDevice *_device;
    NSString *_filename;
    CLKVideo *_video;
    UIImage *_image;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long playback;
@property (retain, nonatomic) NTKInfinityListingAttributes *attributes;
@property (readonly, nonatomic) CLKVideo *video;
@property (readonly, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listingForDevice:(id)a0 withFilename:(id)a1;
+ (id)listingForDevice:(id)a0 withFilename:(id)a1 type:(unsigned long long)a2 attributes:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)complicationColor;
- (BOOL)snapshotDiffers:(id)a0;
- (void)discardAssets;
- (id)initForDevice:(id)a0 withFilename:(id)a1;

@end
