@interface TSgPTPEthernetPort : TSgPTPFDPtPPort

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (int)portType;
- (id)initWithService:(id)a0;
- (id)initWithInterfaceName:(id)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (id)_sourceAddressString;
- (id)_destinationAddressString;

@end
