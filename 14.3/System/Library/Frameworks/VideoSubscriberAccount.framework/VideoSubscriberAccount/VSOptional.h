@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)unwrapWithFallback:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (id)forceUnwrapObject;
- (void)encodeWithCoder:(id)a0;

@end
