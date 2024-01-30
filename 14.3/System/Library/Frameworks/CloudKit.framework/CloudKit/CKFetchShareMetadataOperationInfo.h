@class NSArray, NSDictionary;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (retain, nonatomic) NSArray *rootRecordDesiredKeys;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
