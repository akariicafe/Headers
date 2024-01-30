@class CDPDevice, NSString, NSDictionary, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject

@property (nonatomic) unsigned long long secretType;
@property (nonatomic) BOOL userDidCancel;
@property (nonatomic) BOOL userDidReset;
@property (copy, nonatomic) CDPDevice *device;
@property (copy, nonatomic) NSString *validSecret;
@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (retain, nonatomic) OTClique *recoveredClique;

- (void).cxx_destruct;

@end
