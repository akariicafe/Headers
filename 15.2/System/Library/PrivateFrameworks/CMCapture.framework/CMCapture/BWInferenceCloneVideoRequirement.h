@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoRequirement *sourceVideoRequirement;

- (id)videoFormat;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAttachedMediaKey:(id)a0 sourceVideoRequirement:(id)a1;
- (id)initWithCloneVideoRequirement:(id)a0;

@end
