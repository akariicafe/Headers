@interface REExportedValue : NSObject

+ (id)_exportedValueForTable:(id)a0;
+ (id)exportedValueForArray:(id)a0;
+ (id)exportedValueForDate:(id)a0;
+ (id)exportedValueForDictionary:(id)a0;
+ (id)exportedValueForNumber:(id)a0;
+ (id)exportedValueForObject:(id)a0;
+ (id)exportedValueForString:(id)a0;

- (id)stringValue;
- (id)objectValue;
- (id)dictionaryValue;
- (id)dateValue;
- (id)numberValue;
- (unsigned long long)type;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)arrayValue;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (BOOL)shouldEncodeProperty:(id)a0;

@end
