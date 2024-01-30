@class NSMutableDictionary;

@interface AFPluginBundle : NSObject

@property (retain, nonatomic) Class factoryClass;
@property (retain, nonatomic) id factoryInstance;
@property (retain, nonatomic) NSMutableDictionary *classIdentifiers;

- (void)registerClassIdentifier:(id)a0 forDomain:(id)a1 inGroup:(id)a2;
- (BOOL)supportsClassIdentifier:(id)a0 forDomainKey:(id)a1 groupIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
