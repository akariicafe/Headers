@class NSString;

@interface OIXMLNode : NSObject <NSCopying>

@property (readonly) NSString *name;
@property (retain) NSString *stringValue;
@property (readonly) NSString *XMLString;
@property (readonly) NSString *openingTagString;
@property (readonly) NSString *contentString;
@property (readonly) NSString *closingTagString;

+ (void)_escapeCharacters:(const unsigned short *)a0 amount:(unsigned int)a1 escapeWhiteSpaces:(BOOL)a2 inString:(id)a3 appendingToString:(struct __CFString { } *)a4;
+ (void)_escapeHTMLAttributeCharacters:(id)a0 withQuote:(unsigned short)a1 appendingToString:(struct __CFString { } *)a2;

- (id)stringValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringValue:(id)a0;
- (id)description;
- (id)name;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;

@end
