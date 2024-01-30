@class NSString, NSDate;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource

@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *masterDateCreated;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *prunedAt;
@property (nonatomic) unsigned long long cplType;
@property (nonatomic) unsigned long long sourceCplType;
@property (retain, nonatomic) NSString *fingerprint;
@property (nonatomic) short remoteAvailability;

- (BOOL)isEqualToValidatedExternalResource:(id)a0;
- (id)initWithInternalResource:(id)a0;
- (id)initWithCloudResource:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cplTypeWithAssetID:(id)a0;

@end
