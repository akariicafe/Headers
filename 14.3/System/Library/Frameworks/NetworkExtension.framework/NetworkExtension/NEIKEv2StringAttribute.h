@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying>

@property (nonatomic) unsigned long long customType;
@property (retain) NSString *stringValue;

+ (id)copyTypeDescription;

- (unsigned long long)valueType;
- (unsigned long long)attributeType;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 stringValue:(id)a2;
- (id)description;
- (id)initWithStringValue:(id)a0;

@end
