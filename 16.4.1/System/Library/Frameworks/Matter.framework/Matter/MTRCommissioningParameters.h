@class NSData, NSNumber;
@protocol MTRDeviceAttestationDelegate;

@interface MTRCommissioningParameters : NSObject

@property (copy, nonatomic) NSData *CSRNonce;
@property (copy, nonatomic) NSNumber *failSafeExpiryTimeoutSecs;
@property (copy, nonatomic) NSData *csrNonce;
@property (copy, nonatomic) NSData *attestationNonce;
@property (copy, nonatomic) NSData *wifiSSID;
@property (copy, nonatomic) NSData *wifiCredentials;
@property (copy, nonatomic) NSData *threadOperationalDataset;
@property (retain, nonatomic) id<MTRDeviceAttestationDelegate> deviceAttestationDelegate;
@property (copy, nonatomic) NSNumber *failSafeTimeout;

- (void).cxx_destruct;

@end
