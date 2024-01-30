@class NSString, EQKitMathMLTokenContent;

@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken> {
    struct { unsigned char mType : 2; } mFlags;
    union { unsigned int mChar; NSString *mString; EQKitMathMLTokenContent *mContent; } mContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)isNumber;
- (id)initWithContent:(id)a0;
- (const struct set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> > { struct __tree<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<EQKitTypes::Attributes::Enum, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<EQKitTypes::Attributes::Enum> > { unsigned long long x0; } x2; } x0; } *)mathMLAttributes;
- (id)schemataTokenString;
- (unsigned int)schemataUnicharOrNul;
- (id)initWithString:(id)a0 environment:(id)a1;
- (int)scriptContext;
- (int)scriptVariant;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;
- (id)schemataFontStyling;
- (id)fontStyling;

@end
