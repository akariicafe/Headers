@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)columnName;
- (id)correlationTableName;
- (void)dealloc;

@end
