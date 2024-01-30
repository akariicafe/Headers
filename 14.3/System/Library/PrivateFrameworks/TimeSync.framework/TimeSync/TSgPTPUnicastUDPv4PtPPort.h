@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0 andIPv4Address:(unsigned int)a1;

- (id)initWithService:(id)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (int)portType;
- (id)_sourceAddressString;
- (id)_destinationAddressString;
- (id)initWithInterfaceName:(id)a0 andIPv4Address:(unsigned int)a1;

@end
