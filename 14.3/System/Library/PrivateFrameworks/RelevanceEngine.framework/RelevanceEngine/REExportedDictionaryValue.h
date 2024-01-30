@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary *_dictionary;
}

- (unsigned long long)propertyCount;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)type;
- (id)initWithDictionary:(id)a0;
- (id)exportedValueForKey:(id)a0;

@end
