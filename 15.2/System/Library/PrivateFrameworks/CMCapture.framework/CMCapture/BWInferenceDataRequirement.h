@interface BWInferenceDataRequirement : NSObject <NSCopying>

@property (readonly, nonatomic) long long identifier;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDataRequirement:(id)a0;

@end
