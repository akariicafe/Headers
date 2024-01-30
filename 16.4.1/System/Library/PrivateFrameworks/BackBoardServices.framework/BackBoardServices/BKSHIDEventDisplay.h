@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullDisplay;
+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)_isNullDisplay;
- (BOOL)_isBuiltinDisplay;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_hardwareIdentifier;
- (id)init;
- (id)_initWithHardwareIdentifier:(id)a0;
- (void).cxx_destruct;

@end
