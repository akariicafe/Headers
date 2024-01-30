@class NSNumber;

@interface FindDeviceAndPlaySoundIntentResponse : INIntentResponse

@property (nonatomic, retain) NSNumber *needsConfirmPlaySound;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithPropertiesByName:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithBackingStore:(id)a0;

@end
