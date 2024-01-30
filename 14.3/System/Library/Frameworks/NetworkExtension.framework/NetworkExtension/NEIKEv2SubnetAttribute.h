@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying>

@property (nonatomic) unsigned long long customType;
@property (retain) NWAddressEndpoint *address;
@property unsigned char prefix;
@property unsigned int ipv4SubnetMask;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;

+ (id)copyTypeDescription;

- (unsigned long long)attributeType;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(id)a0 ipv4SubnetMask:(unsigned int)a1;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2 prefix:(unsigned char)a3;
- (id)initWithAddress:(id)a0 prefix:(unsigned char)a1;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2 ipv4SubnetMask:(unsigned int)a3;
- (id)description;

@end
