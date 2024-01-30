@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemEnvironment;
+ (id)environmentWithIdentifier:(id)a0;
+ (id)protobufSchema;
+ (id)keyboardFocusEnvironment;

- (id)initForProtobufDecoding;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0;
- (BOOL)_isSystemEnvironment;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isKeyboardFocusEnvironment;
- (void)encodeWithCoder:(id)a0;

@end
