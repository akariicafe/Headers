@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding, BSXPCSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemEnvironment;
+ (id)environmentWithIdentifier:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)keyboardFocusEnvironment;
+ (id)protobufSchema;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)_isKeyboardFocusEnvironment;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isSystemEnvironment;
- (id)init;
- (void).cxx_destruct;

@end
