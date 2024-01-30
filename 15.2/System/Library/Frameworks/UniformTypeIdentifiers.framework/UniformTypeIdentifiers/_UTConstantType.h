@class NSString;

@interface _UTConstantType : UTType {
    struct Fields { NSString *identifier; unsigned char family : 2; unsigned char tagQuantity : 1; unsigned char nodeType : 1; unsigned char reservedFlags : 4; char preferredExtension[7]; } _fields;
}

+ (void)_validateThisClass;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)identifier;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)isPublicType;
- (BOOL)isDeclared;
- (id)_typeRecord;
- (Class)classForCoder;
- (BOOL)isDynamic;
- (id)_preferredTagOfClass:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (id)tags;
- (id)supertypes;
- (id)debugDescription;
- (BOOL)_isRealized;
- (void)_unrealize;

@end
