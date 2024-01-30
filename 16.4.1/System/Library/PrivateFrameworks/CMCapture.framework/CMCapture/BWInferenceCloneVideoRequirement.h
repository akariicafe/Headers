@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoRequirement *sourceVideoRequirement;

- (id)videoFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCloneVideoRequirement:(id)a0;
- (id)description;
- (id)initWithAttachedMediaKey:(id)a0 sourceVideoRequirement:(id)a1;

@end
