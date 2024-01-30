@interface STMapViewportVertex : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
