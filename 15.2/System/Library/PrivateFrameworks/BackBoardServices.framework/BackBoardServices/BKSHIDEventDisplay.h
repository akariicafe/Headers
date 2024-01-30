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

+ (id)protobufSchema;
+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)nullDisplay;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_isBuiltinDisplay;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_hardwareIdentifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithHardwareIdentifier:(id)a0;
- (BOOL)_isNullDisplay;
- (id)initForProtobufDecoding;

@end
