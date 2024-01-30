@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding> {
    int _direction;
    float _angle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) float angle;

- (id)initWithCoder:(id)a0;
- (id)initWithLaneArrowHead:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
