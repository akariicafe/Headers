@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)a0;

- (id)forceUnwrapObject;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (id)unwrapWithFallback:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (unsigned long long)hash;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;

@end
