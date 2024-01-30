@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_serializedBackingStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long voiceTriggerEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (id)description;
- (id)initWithVoiceTriggerEnabled:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
