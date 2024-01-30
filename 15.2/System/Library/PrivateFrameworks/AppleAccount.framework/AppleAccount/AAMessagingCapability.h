@class NSString;

@interface AAMessagingCapability : NSObject

@property (readonly, nonatomic) long long capability;
@property (readonly, nonatomic) NSString *capabilityString;

- (id)initWithCapabilityType:(long long)a0;

@end
