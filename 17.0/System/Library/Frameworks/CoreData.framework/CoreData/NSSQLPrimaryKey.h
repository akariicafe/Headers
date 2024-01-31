@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;

@end
