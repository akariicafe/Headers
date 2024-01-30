@class NSData;

@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject

@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (id)init;

@end
