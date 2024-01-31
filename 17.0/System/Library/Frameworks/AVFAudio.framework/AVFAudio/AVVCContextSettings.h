@class NSString;

@interface AVVCContextSettings : NSObject

@property (nonatomic) long long activationMode;
@property (retain, nonatomic) NSString *activationDeviceUID;
@property (nonatomic) BOOL announceCallsEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMode:(long long)a0 deviceUID:(id)a1;

@end
