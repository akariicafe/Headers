@interface RTEstimatedLocationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double averageSpeed;
@property (readonly, nonatomic) BOOL enableFallbackModel;
@property (readonly, nonatomic) double timeInterval;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithAverageSpeed:(double)a0 enableFallbackModel:(BOOL)a1 timeInterval:(double)a2;

@end
