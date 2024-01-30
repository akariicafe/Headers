@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyboardFocusEnvironment;
+ (id)environmentWithIdentifier:(id)a0;
+ (id)systemEnvironment;
+ (id)protobufSchema;

- (id)initWithXPCDictionary:(id)a0;
- (BOOL)_isSystemEnvironment;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)_isKeyboardFocusEnvironment;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForProtobufDecoding;

@end
