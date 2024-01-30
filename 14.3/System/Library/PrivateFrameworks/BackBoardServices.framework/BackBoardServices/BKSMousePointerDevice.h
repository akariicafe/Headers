@class NSString, BKSHIDEventSenderDescriptor;

@interface BKSMousePointerDevice : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *preferenceKey;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (nonatomic) BOOL hasVirtualMouseButtons;
@property (nonatomic) BOOL supportsDragLock;
@property (readonly, copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (void)setPreferences:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)preferences;
- (id)initWithSenderDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
