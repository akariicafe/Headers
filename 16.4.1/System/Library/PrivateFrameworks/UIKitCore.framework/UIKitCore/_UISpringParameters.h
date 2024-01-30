@interface _UISpringParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double _dampingRatio;
@property (readonly, nonatomic) double _response;

+ (id)parametersWithDampingRatio:(double)a0 response:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithDampingRatio:(double)a0 response:(double)a1;

@end
