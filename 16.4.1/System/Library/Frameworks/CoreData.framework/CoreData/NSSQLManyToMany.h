@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (id)columnName;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;
- (id)correlationTableName;

@end
