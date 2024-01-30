@class NSString;

@interface AVVCContextSettings : NSObject

@property (nonatomic) long long activationMode;
@property (retain, nonatomic) NSString *activationDeviceUID;

- (id)initWithMode:(long long)a0 deviceUID:(id)a1;

@end
