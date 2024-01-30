@interface REExportedValue : NSObject

+ (id)exportedValueForObject:(id)a0;
+ (id)_exportedValueForTable:(id)a0;
+ (id)exportedValueForString:(id)a0;
+ (id)exportedValueForNumber:(id)a0;
+ (id)exportedValueForArray:(id)a0;
+ (id)exportedValueForDictionary:(id)a0;
+ (id)exportedValueForDate:(id)a0;

- (id)objectValue;
- (unsigned long long)propertyCount;
- (id)arrayValue;
- (id)dateValue;
- (id)dictionaryValue;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)type;
- (id)numberValue;
- (id)stringValue;
- (BOOL)shouldEncodeProperty:(id)a0;
- (id)exportedValueForKey:(id)a0;

@end
