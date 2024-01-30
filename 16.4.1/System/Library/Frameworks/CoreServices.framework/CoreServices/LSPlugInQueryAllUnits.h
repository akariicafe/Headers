@interface LSPlugInQueryAllUnits : LSPlugInQuery

+ (BOOL)supportsSecureCoding;

- (void)sort:(BOOL)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;

@end
