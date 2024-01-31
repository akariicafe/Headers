@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (unsigned int)slot;
- (void)dealloc;
- (unsigned char)sqlType;
- (id)initForReadOnlyFetching;
- (id)columnName;
- (id)description;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;

@end
