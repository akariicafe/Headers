@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)optionalWithObject:(id)a0;
+ (id)decodableClasses;

- (id)initWithObject:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)forceUnwrapObject;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)unwrapWithFallback:(id)a0;
- (id)description;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (void).cxx_destruct;

@end
