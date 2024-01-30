@class NSString, NSData, BKSHIDEventHitTestLayerInformation;

@interface BKSHIDEventAuthenticationMessage : NSObject <BSDescriptionStreamable, NSSecureCoding, NSCopying, BSProtobufSerializable> {
    NSData *_signature;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int eventType;
@property (readonly, nonatomic) unsigned int targetContextID;
@property (readonly, nonatomic) unsigned int targetSlotID;
@property (readonly, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent;
@property (readonly, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long originIdentifier;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, nonatomic) BOOL registrantEntitled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;
+ (id)withKey:(id)a0 buildMessage:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)a0;

@end
