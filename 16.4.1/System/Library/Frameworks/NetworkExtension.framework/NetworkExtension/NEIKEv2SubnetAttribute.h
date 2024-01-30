@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    unsigned char _prefix;
    unsigned int _ipv4SubnetMask;
    NWAddressEndpoint *_address;
    unsigned long long _customType;
}

@property (readonly) NWAddressEndpoint *address;
@property (readonly) unsigned char prefix;
@property (readonly) unsigned int ipv4SubnetMask;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 ipv4SubnetMask:(unsigned int)a1;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2 ipv4SubnetMask:(unsigned int)a3;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2 prefix:(unsigned char)a3;
- (id)initWithAddress:(id)a0 prefix:(unsigned char)a1;

@end
