@class NSData, NSMutableArray;

@interface KmlDeviceConfigurationData : NSObject {
    NSMutableArray *_remainingTlvs;
    BOOL _supportedRadioTagParsed;
    BOOL _sharingConfigTagParsed;
    BOOL _readerSupportsNfc;
    BOOL _readerSupportsUwb;
    BOOL _readerSupportsLELR;
    BOOL _sharingPasswordRequired;
    unsigned char _sharingPasswordLength;
    unsigned char _immoTokenConfig;
    BOOL _keyTrackingReceiptRequired;
    BOOL _onlineAttestationDeliverySupported;
    NSData *_readerBtIRK;
    NSData *_readerBtIdAddress;
    NSData *_deviceBtOOBKey;
    NSData *_deviceBtIntroKey;
    NSData *_supportedKeyProfiles;
    NSData *_confMailboxSettingAsData;
    NSData *_privateMailboxSettingAsData;
    NSData *_sharingPasswordLengthAsData;
}

- (void).cxx_destruct;

@end
