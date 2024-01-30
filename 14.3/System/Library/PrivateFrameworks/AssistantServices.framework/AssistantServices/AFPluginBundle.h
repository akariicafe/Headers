@class NSMutableDictionary;

@interface AFPluginBundle : NSObject

@property (retain, nonatomic) Class factoryClass;
@property (retain, nonatomic) id factoryInstance;
@property (retain, nonatomic) NSMutableDictionary *classIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)registerClassIdentifier:(id)a0 forDomain:(id)a1 inGroup:(id)a2;
- (BOOL)supportsClassIdentifier:(id)a0 forDomainKey:(id)a1 groupIdentifier:(id)a2;

@end
