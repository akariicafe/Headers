@class NSSet;

@interface INUIInterfaceSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interactiveBehavior;
@property (readonly, copy, nonatomic) NSSet *parameters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithInteractiveBehavior:(unsigned long long)a0 parameters:(id)a1;

@end
