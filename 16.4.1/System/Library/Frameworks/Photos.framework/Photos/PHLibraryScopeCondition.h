@class PLLibraryScopeCondition;

@interface PHLibraryScopeCondition : NSObject <NSCopying>

@property (retain, nonatomic) PLLibraryScopeCondition *proxyObject;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long criteria;

+ (id)forwardingTargetForSelector:(SEL)a0;
+ (Class)_mappedPLConditionClass;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
