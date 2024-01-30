@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float width;
@property (nonatomic) float height;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidth:(float)a0 height:(float)a1;
- (void)encodeWithCoder:(id)a0;

@end
