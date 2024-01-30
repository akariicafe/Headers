@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0 andMACAddress:(char *)a1;

- (id)initWithService:(id)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (int)portType;
- (id)_sourceAddressString;
- (id)_destinationAddressString;
- (id)initWithInterfaceName:(id)a0 andMACAddress:(char *)a1;

@end
