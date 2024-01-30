@interface TSNotificationSettings : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ authorizationStatus;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ sound;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ badge;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ showOnLockScreen;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ showInNotificationCenter;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ showBanners;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ scheduledDeliverySetting;

- (id)init;
- (id)initWithSystemSettings:(id)a0;

@end
