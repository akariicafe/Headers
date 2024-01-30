@protocol PUPickerFilter;

@interface PHPickerFilter : NSObject <NSCopying>

@property (class, readonly, nonatomic) PHPickerFilter *panoramasFilter;
@property (class, readonly, nonatomic) PHPickerFilter *screenshotsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *screenRecordingsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *slomoVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *timelapseVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *_depthEffectPhotosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *imagesFilter;
@property (class, readonly, nonatomic) PHPickerFilter *videosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *livePhotosFilter;

@property (readonly, nonatomic) id<PUPickerFilter> _puPickerFilter;

+ (id)playbackStyleFilter:(long long)a0;
+ (id)anyFilterMatchingSubfilters:(id)a0;
+ (id)allFilterMatchingSubfilters:(id)a0;
+ (id)notFilterOfSubfilter:(id)a0;

- (id)_initWithPUPickerFilter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
