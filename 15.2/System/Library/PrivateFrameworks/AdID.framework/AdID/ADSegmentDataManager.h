@class NSNumber;

@interface ADSegmentDataManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken;
@property (nonatomic) BOOL segmentUpdateInProgress;
@property (readonly, nonatomic) BOOL segmentRetrievalInProgress;

+ (id)sharedInstance;

- (void)retrieveSegmentDataIgnoringTimestamps:(id)a0 forceSegments:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)checkTokenAndDSID:(id)a0;
- (void)handleJingleSegmentResponse:(id)a0 activeRecord:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldSendSegmentDataToAdPlatforms:(id)a0;
- (void)populateAccountTypeFields:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldSendSegmentRequest:(id)a0 ignoreTimestamps:(BOOL)a1;
- (void)retrieveSegmentData:(id)a0 forceSegments:(BOOL)a1 ignoreTimestamps:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)verifyGenderInSegmentData:(id)a0;
- (void)handleSuccessfulJingleSegmentResponse:(id)a0 dsidRecord:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSegmentDataToAdPlatforms:(id)a0 completionHandler:(id /* block */)a1;
- (void)retrieveSegmentData:(id)a0 forceSegments:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)handleSegmentUpdateResponse:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
