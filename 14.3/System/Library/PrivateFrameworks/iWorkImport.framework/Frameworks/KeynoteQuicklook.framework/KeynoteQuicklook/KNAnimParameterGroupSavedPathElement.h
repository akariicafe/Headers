@interface KNAnimParameterGroupSavedPathElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long elementType;
@property (nonatomic) struct CGPoint { double x; double y; } toPoint;
@property (nonatomic) struct CGPoint { double x; double y; } cp1;
@property (nonatomic) struct CGPoint { double x; double y; } cp2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
