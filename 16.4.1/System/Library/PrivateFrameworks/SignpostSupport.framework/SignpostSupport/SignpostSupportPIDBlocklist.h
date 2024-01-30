@interface SignpostSupportPIDBlocklist : SignpostSupportPIDFilter

- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotEqual;
- (BOOL)passesPIDNumber:(id)a0;

@end
