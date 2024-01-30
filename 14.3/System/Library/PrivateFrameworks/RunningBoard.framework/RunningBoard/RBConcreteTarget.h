@class RBProcess, NSString, RBSProcessIdentity;

@interface RBConcreteTarget : NSObject <NSCopying>

@property (readonly, nonatomic) RBProcess *process;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, nonatomic, getter=isSystem) BOOL system;

+ (id)targetWithIdentity:(id)a0 environment:(id)a1;
+ (id)targetWithProcess:(id)a0 environment:(id)a1;
+ (id)systemTarget;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createRBSTarget;
- (id)description;

@end
