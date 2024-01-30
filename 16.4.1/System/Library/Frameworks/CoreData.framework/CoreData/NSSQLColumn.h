@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (unsigned char)sqlType;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)columnName;
- (id)initForReadOnlyFetching;
- (unsigned int)slot;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;
- (id)description;

@end
