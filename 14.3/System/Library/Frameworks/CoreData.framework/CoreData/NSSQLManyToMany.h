@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (id)correlationTableName;
- (id)columnName;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)_setOrderColumnName:(id)a0;
- (unsigned char)columnSQLType;
- (BOOL)isTableSchemaEqual:(id)a0;
- (unsigned char)orderColumnSQLType;
- (void)dealloc;
- (void)_setColumnName:(id)a0;
- (id)orderColumnName;
- (BOOL)isReflexive;
- (id)inverseColumnName;
- (void)_setInverseManyToMany:(id)a0;
- (void)_setCorrelationTableName:(id)a0;
- (id)inverseManyToMany;
- (id)inverseOrderColumnName;
- (BOOL)isMaster;

@end
