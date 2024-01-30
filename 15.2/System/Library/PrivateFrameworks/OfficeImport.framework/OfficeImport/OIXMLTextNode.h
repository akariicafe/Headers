@class NSString;

@interface OIXMLTextNode : OIXMLNode {
    NSString *_value;
}

+ (id)textNodeWithStringValue:(id)a0;

- (id)stringValue;
- (void)setStringValue:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)initWithStringValue:(id)a0;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;

@end
