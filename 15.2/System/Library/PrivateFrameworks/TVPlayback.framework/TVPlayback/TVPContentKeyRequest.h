@class NSData, NSString, NSURL, NSDate, TVPContentKeySession, NSArray, NSDictionary, NSMutableDictionary, NSError, NSNumber, AVContentKeyRequest;

@interface TVPContentKeyRequest : NSObject

@property (retain, nonatomic) NSURL *keyIdentifier;
@property (readonly, nonatomic) AVContentKeyRequest *avContentKeyRequest;
@property (weak, nonatomic) TVPContentKeySession *contentKeySession;
@property (nonatomic) BOOL wantsOfflineKeysIfPossible;
@property (nonatomic) BOOL isRenewal;
@property (nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, nonatomic) NSString *eventReportingID;
@property (readonly, nonatomic) BOOL isCancelled;
@property (retain, nonatomic) NSDate *requestStartDate;
@property (retain, nonatomic) NSDate *requestEndDate;
@property (retain, nonatomic) NSData *keyRequestData;
@property (retain, nonatomic) NSDictionary *additionalRequestParams;
@property (retain, nonatomic) NSDate *serverRequestStartDate;
@property (retain, nonatomic) NSArray *keyFormatVersions;
@property (retain, nonatomic) NSData *offlineKeyData;
@property (retain, nonatomic) NSData *secureInvalidationNonceData;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *keyResponseData;
@property (retain, nonatomic) NSDate *renewalDate;
@property (retain, nonatomic) NSNumber *renewalInterval;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (retain, nonatomic) NSString *contentID;
@property (nonatomic) BOOL isLowValueKey;
@property (retain, nonatomic) NSNumber *playbackDuration;
@property (nonatomic) BOOL allowManualRenewal;
@property (retain, nonatomic) NSDictionary *additionalRequestParamsFromResponse;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) NSError *error;

+ (void)initialize;
+ (id)secureInvalidationRequestForIdentifier:(id)a0 offlineKeyData:(id)a1 additionalRequestParams:(id)a2 contentID:(id)a3;

- (void)finish;
- (id)description;
- (void).cxx_destruct;
- (void)makeKeyRequestDataForCertificateData:(id)a0 assetIDData:(id)a1 completion:(id /* block */)a2;
- (void)finishByRequestingOfflineKeysIfPossible;
- (id)offlineKeyDataFromServerKeyData:(id)a0 error:(id *)a1;
- (id)initWithAVContentKeyRequest:(id)a0;

@end
