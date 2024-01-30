@class NSString, NSDateComponents;

@interface DeviceSelectionIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *remoteDeviceID;
@property (copy, nonatomic) NSDateComponents *requestTime;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSString *voiceID;
@property (nonatomic) long long interactionType;

@end
