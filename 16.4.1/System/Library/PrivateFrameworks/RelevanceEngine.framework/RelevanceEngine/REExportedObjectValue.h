@interface REExportedObjectValue : REExportedValue {
    id _object;
    BOOL _allowsEncoding;
}

- (id)initWithObject:(id)a0;
- (id)objectValue;
- (unsigned long long)type;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (BOOL)shouldEncodeProperty:(id)a0;

@end
