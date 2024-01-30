@interface REExportedValue : NSObject

+ (id)exportedValueForNumber:(id)a0;
+ (id)exportedValueForDictionary:(id)a0;
+ (id)exportedValueForDate:(id)a0;
+ (id)exportedValueForString:(id)a0;
+ (id)exportedValueForObject:(id)a0;
+ (id)exportedValueForArray:(id)a0;
+ (id)_exportedValueForTable:(id)a0;

- (id)numberValue;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)stringValue;
- (id)objectValue;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (id)dateValue;
- (id)dictionaryValue;
- (BOOL)shouldEncodeProperty:(id)a0;
- (unsigned long long)type;
- (id)arrayValue;

@end
