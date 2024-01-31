@interface NSSQLAttribute : NSSQLColumn

- (void)dealloc;
- (id)attributeDescription;
- (BOOL)isFileBackedFuture;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetchWithExpression:(id)a0;

@end
