@class BKSHIDEventDisplay, NSString;

@interface BKSHIDEventSenderDescriptor : NSObject <BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long hardwareType;
@property (readonly, nonatomic) BKSHIDEventDisplay *associatedDisplay;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic) unsigned int primaryPage;
@property (readonly, nonatomic) unsigned int primaryUsage;
@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wildcard;
+ (id)build:(id /* block */)a0;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithHardwareType:(long long)a0 associatedDisplay:(id)a1 authenticated:(BOOL)a2 primaryPage:(unsigned int)a3 primaryUsage:(unsigned int)a4 senderID:(unsigned long long)a5;
- (void)encodeWithCoder:(id)a0;

@end
