@class NSArray;

@interface REExportedArrayValue : REExportedValue {
    NSArray *_array;
}

- (unsigned long long)propertyCount;
- (id)arrayValue;
- (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)type;
- (id)initWithArray:(id)a0;
- (id)exportedValueForKey:(id)a0;

@end
