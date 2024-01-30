@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoFormat *videoFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (unsigned long long)satisfactionHash;
- (id)initWithVideoRequirement:(id)a0;

@end
