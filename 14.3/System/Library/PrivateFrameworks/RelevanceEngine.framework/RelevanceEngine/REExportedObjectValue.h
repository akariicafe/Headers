@interface REExportedObjectValue : REExportedValue {
    id _object;
    BOOL _allowsEncoding;
}

- (id)objectValue;
- (unsigned long long)propertyCount;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)type;
- (BOOL)shouldEncodeProperty:(id)a0;
- (id)exportedValueForKey:(id)a0;

@end
