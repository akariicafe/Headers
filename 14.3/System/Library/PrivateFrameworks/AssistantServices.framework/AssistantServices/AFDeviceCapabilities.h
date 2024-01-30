@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_serializedBackingStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long voiceTriggerEnabled;
@property (readonly, nonatomic) long long seymourEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedBackingStore;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithVoiceTriggerEnabled:(long long)a0 seymourEnabled:(long long)a1;
- (id)initWithSerializedBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
