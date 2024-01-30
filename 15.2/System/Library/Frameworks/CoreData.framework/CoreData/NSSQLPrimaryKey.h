@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)name;
- (void)dealloc;

@end
