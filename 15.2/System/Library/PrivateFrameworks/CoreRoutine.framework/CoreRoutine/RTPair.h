@interface RTPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

+ (Class)getClusterClassOfObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirstObject:(id)a0 secondObject:(id)a1;

@end
