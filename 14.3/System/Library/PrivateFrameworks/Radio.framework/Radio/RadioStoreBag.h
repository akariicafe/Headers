@class NSString, NSDictionary, NSURL, NSArray, SSVPlatformContext, NSNumber;

@interface RadioStoreBag : NSObject {
    NSArray *_amdDomains;
    NSDictionary *_mescalRequestWhitelist;
    NSDictionary *_mescalResponseWhitelist;
    SSVPlatformContext *_platformContext;
    NSNumber *_shouldSendKBSyncDataValue;
}

@property (readonly, copy, nonatomic) NSDictionary *URLBagDictionary;
@property (readonly, nonatomic) NSString *leaseCertificateURLString;
@property (readonly, nonatomic) NSString *mescalCertificateURLString;
@property (readonly, nonatomic) NSString *mescalSetupURLString;
@property (readonly, nonatomic, getter=isAdFreeRadioEnabled) BOOL adFreeRadioEnabled;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *platformLookupURLString;
@property (readonly, nonatomic) NSDictionary *radioConfigurationDictionary;
@property (readonly, nonatomic) BOOL shouldSendKBSyncData;
@property (readonly, nonatomic) NSString *storeFrontSuffix;
@property (readonly, nonatomic) NSString *streamingDownloadURLString;

- (void).cxx_destruct;
- (id)_cacheRepresentation;
- (id)_initWithURLBagDictionary:(id)a0;
- (BOOL)shouldMescalSignRequestWithURL:(id)a0;
- (BOOL)shouldMescalVerifyResponseFromURL:(id)a0;
- (id)_initWithCacheRepresentation:(id)a0;
- (id)_platformContext;

@end
