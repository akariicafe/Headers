@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned int)slot;
- (id)columnName;
- (unsigned int)fetchIndex;
- (id)initForReadOnlyFetching;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (void)_setFetchIndex:(unsigned int)a0;
- (BOOL)allowAliasing;
- (void)_setColumnName:(id)a0;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (void)_setSlotIfDefault:(unsigned int)a0;
- (id)description;
- (void)_setSQLType:(unsigned char)a0;
- (unsigned char)sqlType;
- (id)cloneForReadOnlyFetching;
- (void)setAllowAliasing:(BOOL)a0;
- (unsigned int)roughSizeEstimate;

@end
