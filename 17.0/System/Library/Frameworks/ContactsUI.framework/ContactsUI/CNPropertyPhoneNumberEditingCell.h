@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell

@property (retain, nonatomic) NSArray *previousValue;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)a0 inputIndex:(unsigned int)a1;

@end
