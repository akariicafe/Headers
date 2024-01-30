@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying>

@property (readonly, copy, nonatomic) NSString *attachedMediaKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)description;

@end
