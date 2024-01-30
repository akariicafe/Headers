@interface LSPlugInQuery : _LSQuery

+ (id)pluginQueryWithIdentifier:(id)a0;
+ (id)pluginQueryWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
+ (BOOL)supportsSecureCoding;
+ (id)pluginQueryWithURL:(id)a0;
+ (id)pluginQueryWithUUID:(id)a0;
+ (id)pluginQuery;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)sort:(BOOL)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
