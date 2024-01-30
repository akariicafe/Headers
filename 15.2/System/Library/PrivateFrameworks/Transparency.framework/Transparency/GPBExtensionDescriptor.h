@class NSString, NSData, GPBMessage, GPBEnumDescriptor;

@interface GPBExtensionDescriptor : NSObject <NSCopying> {
    struct GPBExtensionDescription { union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } x0; char *x1; union { char *x0; Class x1; } x2; union { char *x0; Class x1; } x3; void /* function */ *x4; int x5; unsigned char x6; unsigned char x7; } *description_;
    union { BOOL valueBool; int valueInt32; long long valueInt64; unsigned int valueUInt32; unsigned long long valueUInt64; float valueFloat; double valueDouble; NSData *valueData; NSString *valueString; GPBMessage *valueMessage; int valueEnum; } defaultValue_;
}

@property (readonly, nonatomic) int wireType;
@property (readonly, nonatomic) int alternateWireType;
@property (readonly, nonatomic) unsigned int fieldNumber;
@property (readonly, nonatomic) Class containingMessageClass;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic, getter=isRepeated) BOOL repeated;
@property (readonly, nonatomic, getter=isPackable) BOOL packable;
@property (readonly, nonatomic) Class msgClass;
@property (readonly, nonatomic) NSString *singletonName;
@property (readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property (readonly, nonatomic) id defaultValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)compareByFieldNumber:(id)a0;
- (id)initWithExtensionDescription:(struct GPBExtensionDescription { union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } x0; char *x1; union { char *x0; Class x1; } x2; union { char *x0; Class x1; } x3; void /* function */ *x4; int x5; unsigned char x6; unsigned char x7; } *)a0;
- (const char *)singletonNameC;
- (id)initWithExtensionDescription:(struct GPBExtensionDescription { union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } x0; char *x1; union { char *x0; Class x1; } x2; union { char *x0; Class x1; } x3; void /* function */ *x4; int x5; unsigned char x6; unsigned char x7; } *)a0 usesClassRefs:(BOOL)a1;

@end
