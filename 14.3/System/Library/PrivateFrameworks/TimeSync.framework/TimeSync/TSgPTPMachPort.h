@interface TSgPTPMachPort : TSgPTPPort

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (id)initWithService:(id)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (int)portType;

@end
