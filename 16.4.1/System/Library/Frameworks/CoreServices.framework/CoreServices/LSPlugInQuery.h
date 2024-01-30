@interface LSPlugInQuery : _LSQuery

+ (id)pluginQueryWithIdentifier:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)pluginQueryWithUUID:(id)a0;
+ (id)pluginQueryWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
+ (id)pluginQuery;
+ (id)pluginQueryWithURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (BOOL)_remoteResolutionIsExpensive;
- (unsigned long long)hash;
- (void)sort:(BOOL)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;

@end
