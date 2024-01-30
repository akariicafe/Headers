@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary *_dictionary;
}

- (id)dictionaryValue;
- (unsigned long long)type;
- (id)initWithDictionary:(id)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;

@end
