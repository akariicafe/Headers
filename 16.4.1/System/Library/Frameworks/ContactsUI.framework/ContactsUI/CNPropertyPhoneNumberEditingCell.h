@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell

@property (retain, nonatomic) NSArray *previousValue;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)a0 inputIndex:(unsigned int)a1;

@end
