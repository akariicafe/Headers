@interface ISPropertyListProvider : ISProtocolDataProvider <NSCopying>

- (BOOL)processPropertyList:(id)a0 returningError:(id *)a1;
- (BOOL)processDialogFromPropertyList:(id)a0 returningError:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
