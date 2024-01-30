@interface SRUIFMutableStack : SRUIFStack

- (void)pushObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)popTopObject;
- (void)popObjectsUsingBlock:(id /* block */)a0;

@end
