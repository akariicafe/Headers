@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned int)slot;
- (unsigned char)sqlType;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)description;
- (id)columnName;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)initForReadOnlyFetching;
- (void)dealloc;

@end
