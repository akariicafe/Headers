@class NSString;

@interface OIXMLElement : OIXMLNode {
    NSString *_name;
    id _attributes;
    id _children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
    unsigned char _type;
}

+ (id)elementWithType:(unsigned char)a0;
+ (id)elementWithType:(unsigned char)a0 stringValue:(id)a1;

- (id)stringValue;
- (id)initWithType:(unsigned char)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringValue:(id)a0;
- (void)addAttribute:(id)a0;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)initWithType:(unsigned char)a0 stringValue:(id)a1;
- (id)contentString;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (long long)attributeCount;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;
- (long long)childrenCount;
- (id)closingTagString;
- (BOOL)isEmptyHTMLElement;
- (id)openingTagString;

@end
