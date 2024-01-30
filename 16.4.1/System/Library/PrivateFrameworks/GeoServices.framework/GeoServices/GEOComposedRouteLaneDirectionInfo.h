@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding> {
    int _direction;
    float _angle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) float angle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLaneArrowHead:(id)a0;

@end
