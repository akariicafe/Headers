@class RBProcess, NSString, RBSProcessIdentity;

@interface RBConcreteTarget : NSObject <NSCopying, RBConcreteTargeting>

@property (readonly, nonatomic) RBProcess *process;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, nonatomic, getter=isSystem) BOOL system;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemTarget;
+ (id)targetWithProcess:(id)a0 environment:(id)a1;
+ (id)targetWithIdentity:(id)a0 environment:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createRBSTarget;

@end
