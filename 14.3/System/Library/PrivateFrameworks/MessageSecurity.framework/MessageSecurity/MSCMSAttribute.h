@class NSData, MSOID, NSArray;

@interface MSCMSAttribute : NSObject <MSCMSAttributeCoder>

@property (retain) NSData *attributeDERData;
@property struct Attribute { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct Attribute_value { unsigned int x0; struct heim_base_data *x1; } x1; } *encodedAttribute;
@property (readonly, retain) MSOID *attributeType;
@property (readonly, retain) NSArray *attributeValues;

+ (id)decodeAttribute:(struct Attribute { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct Attribute_value { unsigned int x0; struct heim_base_data *x1; } x1; } *)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)encodeAttributeWithError:(id *)a0;
- (struct Attribute { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct Attribute_value { unsigned int x0; struct heim_base_data *x1; } x1; } *)generateAttributeStruct;
- (id)initWithAttributeStruct:(struct Attribute { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct Attribute_value { unsigned int x0; struct heim_base_data *x1; } x1; } *)a0 error:(id *)a1;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithDER:(id)a0;
- (id)initWithAttributeType:(id)a0 values:(id)a1;

@end
