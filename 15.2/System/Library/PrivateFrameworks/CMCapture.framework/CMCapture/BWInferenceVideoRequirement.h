@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoFormat *videoFormat;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (id)initWithVideoRequirement:(id)a0;
- (unsigned long long)satisfactionHash;
- (id)initWithAttachedMediaKey:(id)a0 count:(unsigned long long)a1;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1 count:(unsigned long long)a2;

@end
