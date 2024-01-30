@protocol PUPickerFilter;

@interface PHPickerFilter : NSObject <NSCopying>

@property (class, readonly, nonatomic) PHPickerFilter *imagesFilter;
@property (class, readonly, nonatomic) PHPickerFilter *videosFilter;
@property (class, readonly, nonatomic) PHPickerFilter *livePhotosFilter;

@property (readonly, nonatomic) id<PUPickerFilter> _puPickerFilter;

+ (id)anyFilterMatchingSubfilters:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPUPickerFilter:(id)a0;

@end
