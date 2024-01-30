@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier

@property (retain) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)identifierData;
- (id)stringValue;
- (unsigned long long)identifierType;

@end
