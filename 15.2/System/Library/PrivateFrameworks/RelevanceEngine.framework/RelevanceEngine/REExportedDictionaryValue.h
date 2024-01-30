@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary *_dictionary;
}

- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)type;

@end
