@class NSString;

@interface _UTConstantType : UTType {
    struct Fields { NSString *identifier; unsigned char family : 2; unsigned char tagQuantity : 1; unsigned char nodeType : 1; unsigned char reservedFlags : 4; char preferredExtension[7]; } _fields;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (void)_validateThisClass;

- (id)_typeRecord;
- (BOOL)isDeclared;
- (BOOL)isPublicType;
- (id)supertypes;
- (BOOL)_getEnclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0;
- (id)_preferredTagOfClass:(id)a0;
- (BOOL)_isRealized;
- (void)_unrealize;
- (BOOL)isDynamic;
- (BOOL)conformsToType:(id)a0;
- (id)tags;
- (id)debugDescription;
- (Class)classForCoder;
- (id)identifier;

@end
