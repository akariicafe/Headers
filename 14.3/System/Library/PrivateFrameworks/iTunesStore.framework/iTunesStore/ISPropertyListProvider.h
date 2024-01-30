@interface ISPropertyListProvider : ISProtocolDataProvider <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)processDialogFromPropertyList:(id)a0 returningError:(id *)a1;
- (BOOL)processPropertyList:(id)a0 returningError:(id *)a1;

@end
