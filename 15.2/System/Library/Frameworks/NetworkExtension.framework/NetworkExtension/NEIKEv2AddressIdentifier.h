@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier

@property (retain) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (unsigned long long)identifierType;
- (id)stringValue;
- (id)identifierData;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;

@end
