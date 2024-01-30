@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying>

@property (readonly, copy, nonatomic) NSString *attachedMediaKey;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAttachedMediaKey:(id)a0 count:(unsigned long long)a1;
- (id)initWithMediaRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0;

@end
