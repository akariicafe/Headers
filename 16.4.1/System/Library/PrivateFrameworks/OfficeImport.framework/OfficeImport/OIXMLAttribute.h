@class NSString;

@interface OIXMLAttribute : OIXMLNode {
    NSString *_name;
    NSString *_value;
}

+ (id)attributeWithName:(id)a0 stringValue:(id)a1;

- (id)stringValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringValue:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:(id)a0 stringValue:(id)a1;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;

@end
