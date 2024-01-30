@class NSString, EQKitMathMLTokenContent;

@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken> {
    struct { unsigned char mType : 2; } mFlags;
    union { unsigned int mChar; NSString *mString; EQKitMathMLTokenContent *mContent; } mContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNumber;
- (id)init;
- (id)initWithContent:(id)a0;
- (void)dealloc;
- (const void *)mathMLAttributes;
- (id)schemataTokenString;
- (unsigned int)schemataUnicharOrNul;
- (id)initWithString:(id)a0 environment:(id)a1;
- (int)scriptContext;
- (int)scriptVariant;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;
- (id)schemataFontStyling;
- (id)fontStyling;

@end
