@class NSString;

@interface OIXMLAttribute : OIXMLNode {
    NSString *_name;
    NSString *_value;
}

+ (id)attributeWithName:(id)a0 stringValue:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringValue:(id)a0;
- (id)name;
- (id)stringValue;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;
- (id)initWithName:(id)a0 stringValue:(id)a1;

@end
