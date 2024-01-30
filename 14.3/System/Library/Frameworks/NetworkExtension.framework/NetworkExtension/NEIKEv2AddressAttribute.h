@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying>

@property (nonatomic) unsigned long long customType;
@property (retain) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (unsigned long long)attributeType;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2;
- (id)description;

@end
