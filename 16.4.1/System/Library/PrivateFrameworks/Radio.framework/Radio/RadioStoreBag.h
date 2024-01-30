@class NSString, NSDictionary, NSURL, NSArray, SSVPlatformContext, NSNumber;

@interface RadioStoreBag : NSObject {
    NSArray *_amdDomains;
    NSDictionary *_mescalRequestAllowList;
    NSDictionary *_mescalResponseAllowList;
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
- (BOOL)shouldMescalSignRequestWithURL:(id)a0;
- (id)_cacheRepresentation;
- (id)_initWithCacheRepresentation:(id)a0;
- (id)_initWithURLBag:(id)a0;
- (id)_platformContext;
- (BOOL)shouldMescalVerifyResponseFromURL:(id)a0;

@end
