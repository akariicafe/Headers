@interface REExportedObjectValue : REExportedValue {
    id _object;
    BOOL _allowsEncoding;
}

- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)objectValue;
- (unsigned long long)propertyCount;
- (id)initWithObject:(id)a0;
- (id)exportedValueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldEncodeProperty:(id)a0;
- (unsigned long long)type;

@end
