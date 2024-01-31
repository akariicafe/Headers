@class NSArray, NSDictionary;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (retain, nonatomic) NSArray *rootRecordDesiredKeys;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee;
@property (nonatomic) BOOL skipShareDecryption;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
