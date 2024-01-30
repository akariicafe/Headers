@class NSString, MRSupportedProtocolMessages, MRDeviceInfo;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *hostName;
@property (nonatomic) long long hostPort;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (nonatomic) BOOL usingSystemPairing;

- (void)setDeviceInfo:(id)a0;
- (void)setName:(id)a0;
- (void)setHostName:(id)a0;
- (void)setHostPort:(long long)a0;
- (void)setSupportedMessages:(id)a0;
- (void)setUsingSystemPairing:(BOOL)a0;

@end
