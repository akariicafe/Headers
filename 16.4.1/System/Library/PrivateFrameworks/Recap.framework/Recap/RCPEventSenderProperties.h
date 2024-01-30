@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)naturalInputCollectionSender;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)pencilDigitizerSender;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)gamepadSender;
+ (id)trackpadSender;
+ (id)touchScreenDigitizerSender;
+ (id)globalPositionSender;
+ (id)tvRemoteSender;
+ (id)senderWithProperties:(id)a0;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)keyboardSender;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)mouseSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
