@class MRDeviceInfo, MRSupportedProtocolMessages;

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;

- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(id)a0;

@end
