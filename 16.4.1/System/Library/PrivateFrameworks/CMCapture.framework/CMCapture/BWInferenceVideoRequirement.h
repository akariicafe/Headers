@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoFormat *videoFormat;
@property (readonly, nonatomic) int videoStorageType;

- (id)initWithVideoRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1 videoStorageType:(int)a2;
- (unsigned long long)satisfactionHash;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1 count:(unsigned long long)a2;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1;
- (id)initWithAttachedMediaKey:(id)a0 count:(unsigned long long)a1;
- (id)description;

@end
