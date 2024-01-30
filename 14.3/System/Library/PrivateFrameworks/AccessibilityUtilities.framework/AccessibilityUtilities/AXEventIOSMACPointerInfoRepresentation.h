@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL pressed;
@property (nonatomic) long long buttonIndex;
@property (nonatomic) struct CGPoint { double x; double y; } location;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
