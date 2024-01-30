@protocol PUPickerFilter;

@interface PHPickerFilter : NSObject <NSCopying>

@property (class, readonly, nonatomic) PHPickerFilter *_depthEffectPhotosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *imagesFilter;
@property (class, readonly, nonatomic) PHPickerFilter *videosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *livePhotosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *depthEffectPhotosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *burstsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *panoramasFilter;
@property (class, readonly, nonatomic) PHPickerFilter *screenshotsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *screenRecordingsFilter;
@property (class, readonly, nonatomic) PHPickerFilter *cinematicVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *slomoVideosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *timelapseVideosFilter;

@property (readonly, nonatomic) id<PUPickerFilter> _puPickerFilter;

+ (id)anyFilterMatchingSubfilters:(id)a0;
+ (id)allFilterMatchingSubfilters:(id)a0;
+ (id)notFilterOfSubfilter:(id)a0;
+ (id)playbackStyleFilter:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithPUPickerFilter:(id)a0;

@end
