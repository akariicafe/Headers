@class NSSet, NSMutableDictionary;

@interface PXDiagnosticsItemProvider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_loadHandlers;
@property (readonly, nonatomic) NSSet *registeredIdentifiers;

+ (id)providerWithItem:(id)a0 identifier:(id)a1;

- (id)init;
- (BOOL)hasItemForIdentifier:(id)a0;
- (void)registerItem:(id)a0 forIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)registerItemForIdentifier:(id)a0 loadHandler:(id /* block */)a1;
- (id)itemForIdentifier:(id)a0;

@end
