@interface NSSQLAttribute : NSSQLColumn

- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;
- (id)attributeDescription;
- (BOOL)isFileBackedFuture;

@end
