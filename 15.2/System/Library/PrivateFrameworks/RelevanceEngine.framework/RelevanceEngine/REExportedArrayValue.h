@class NSArray;

@interface REExportedArrayValue : REExportedValue {
    NSArray *_array;
}

- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)initWithArray:(id)a0;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)arrayValue;

@end
