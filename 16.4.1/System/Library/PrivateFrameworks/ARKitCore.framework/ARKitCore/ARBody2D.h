@class ARSkeleton2D;

@interface ARBody2D : NSObject

@property (readonly, nonatomic) ARSkeleton2D *skeleton;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSkeleton2D:(id)a0;

@end
