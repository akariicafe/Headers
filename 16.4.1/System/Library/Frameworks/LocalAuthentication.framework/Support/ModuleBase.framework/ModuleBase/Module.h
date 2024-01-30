@class MechanismManager;

@interface Module : NSObject

@property (readonly, nonatomic) MechanismManager *mechanismManager;
@property (readonly, nonatomic) long long type;

+ (id)missingSubclassErrorWithIdentifier:(id)a0;

- (void)trackPlugin:(id)a0 processId:(int)a1 proxy:(id)a2 context:(id)a3 invalidationBlock:(id /* block */)a4;
- (void)contextPluginWithExternalizedContext:(id)a0 reply:(id /* block */)a1;
- (id)initWithMechanismManager:(id)a0 type:(long long)a1;
- (void)untrackPlugin:(id)a0;
- (void).cxx_destruct;

@end
