@class NSString;

@interface LNViewAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) long long viewIdentifier;
@property (readonly, nonatomic) struct LNViewLocation { double x; double y; double z; double width; double height; double depth; } location;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 viewIdentifier:(long long)a1 location:(struct LNViewLocation { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
