@class NUAdContextDefinition;

@interface NUAdContextConstructor : NSObject

@property (readonly, nonatomic) NUAdContextDefinition *rootDefinition;
@property (readonly, nonatomic) NUAdContextDefinition *headerDefinition;
@property (readonly, nonatomic) NUAdContextDefinition *bodyDefinition;

- (void).cxx_destruct;
- (id)initWithRootDefinition:(id)a0 headerDefinition:(id)a1 bodyDefinition:(id)a2;
- (id)contextForContextProviders:(id)a0 keyedContextProviders:(id)a1;
- (id)valueForPropertyDefinition:(id)a0 fromContextProviders:(id)a1 keyedContextProviders:(id)a2;
- (id)contextEntryForKey:(id)a0 andValue:(id)a1;
- (id)newsContextForContextProviders:(id)a0 andKeyedContextProviders:(id)a1;
- (void)dictionary:(id)a0 addValue:(id)a1 forKeyPath:(id)a2;

@end
