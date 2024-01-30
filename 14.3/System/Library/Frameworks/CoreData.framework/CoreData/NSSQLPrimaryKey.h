@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}

- (void)_setName:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)sqlTypeString;
- (void)dealloc;
- (id)name;

@end
