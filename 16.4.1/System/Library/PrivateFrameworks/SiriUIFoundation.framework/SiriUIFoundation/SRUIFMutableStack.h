@interface SRUIFMutableStack : SRUIFStack

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pushObject:(id)a0;
- (void)popObjectsUsingBlock:(id /* block */)a0;
- (id)popTopObject;

@end
