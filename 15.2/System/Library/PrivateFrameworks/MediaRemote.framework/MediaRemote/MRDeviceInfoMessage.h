@class MRDeviceInfo, MRSupportedProtocolMessages;

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;

- (id)initWithDeviceInfo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)encryptionType;
- (unsigned long long)type;

@end
