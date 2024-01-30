@interface NSSQLAttribute : NSSQLColumn

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)attributeDescription;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (BOOL)isFileBackedFuture;
- (void)dealloc;

@end
