@class NSString, TRIPBOneofDescriptor, TRIPBEnumDescriptor, NSData, TRIPBMessage;

@interface TRIPBFieldDescriptor : NSObject {
    struct TRIPBMessageFieldDescription { char *x0; union { char *x0; void /* function */ *x1; void /* function */ *x2; } x1; unsigned int x2; int x3; unsigned int x4; unsigned short x5; unsigned char x6; } *description_;
    SEL getSel_;
    SEL setSel_;
    SEL hasOrCountSel_;
    SEL setHasSel_;
    union { BOOL valueBool; int valueInt32; long long valueInt64; unsigned int valueUInt32; unsigned long long valueUInt64; float valueFloat; double valueDouble; NSData *valueData; NSString *valueString; TRIPBMessage *valueMessage; int valueEnum; } defaultValue_;
    union { TRIPBEnumDescriptor *enumDescriptor_; void /* function */ *enumVerifier_; } enumHandling_;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int number;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) BOOL hasDefaultValue;
@property (readonly, nonatomic) union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } defaultValue;
@property (readonly, nonatomic, getter=isRequired) BOOL required;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, nonatomic) unsigned char fieldType;
@property (readonly, nonatomic) unsigned char mapKeyDataType;
@property (readonly, nonatomic, getter=isPackable) BOOL packable;
@property (readonly, nonatomic) TRIPBOneofDescriptor *containingOneof;
@property (readonly, nonatomic) Class msgClass;
@property (readonly, nonatomic) TRIPBEnumDescriptor *enumDescriptor;

- (id)init;
- (void)dealloc;
- (id)initWithFieldDescription:(void *)a0 includesDefault:(BOOL)a1 syntax:(unsigned char)a2;
- (BOOL)isValidEnumValue:(int)a0;
- (id)textFormatName;

@end
