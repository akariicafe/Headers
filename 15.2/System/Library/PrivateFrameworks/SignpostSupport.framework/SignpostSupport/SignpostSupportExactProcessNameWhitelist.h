@interface SignpostSupportExactProcessNameWhitelist : SignpostSupportExactProcessNameFilter

- (unsigned long long)_compoundPredicateType;
- (BOOL)passesProcessName:(id)a0;
- (BOOL)_wantsNotEqual;

@end
