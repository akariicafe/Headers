@interface SignpostSupportPIDWhitelist : SignpostSupportPIDFilter

- (unsigned long long)_compoundPredicateType;
- (BOOL)passesPIDNumber:(id)a0;
- (BOOL)_wantsNotEqual;

@end
