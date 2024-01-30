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

+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)nullDisplay;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (id)_initWithHardwareIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_hardwareIdentifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isBuiltinDisplay;
- (BOOL)_isNullDisplay;
- (void)encodeWithCoder:(id)a0;

@end
