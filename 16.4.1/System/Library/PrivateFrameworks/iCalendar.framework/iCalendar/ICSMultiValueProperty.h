@interface ICSMultiValueProperty : ICSProperty

- (id)values;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (BOOL)isMultiValued;
- (id)value;
- (void)setValue:(id)a0 type:(unsigned long long)a1;
- (void)setValues:(id)a0 valueType:(unsigned long long)a1;
- (void)_setParsedValues:(id)a0 type:(unsigned long long)a1;

@end
