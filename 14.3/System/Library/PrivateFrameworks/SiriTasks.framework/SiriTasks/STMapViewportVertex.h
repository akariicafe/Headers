@interface STMapViewportVertex : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
