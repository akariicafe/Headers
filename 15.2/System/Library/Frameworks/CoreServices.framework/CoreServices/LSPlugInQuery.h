@interface LSPlugInQuery : _LSQuery

+ (BOOL)supportsSecureCoding;
+ (id)pluginQueryWithIdentifier:(id)a0;
+ (id)pluginQuery;
+ (id)pluginQueryWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
+ (id)pluginQueryWithUUID:(id)a0;
+ (id)pluginQueryWithURL:(id)a0;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)sort:(BOOL)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;
- (unsigned long long)hash;
- (BOOL)_remoteResolutionIsExpensive;

@end
