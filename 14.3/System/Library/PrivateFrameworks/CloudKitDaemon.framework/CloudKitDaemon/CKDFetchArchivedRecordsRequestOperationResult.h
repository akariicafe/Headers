@class NSData;

@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject

@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (nonatomic) long long status;

- (id)init;
- (void).cxx_destruct;

@end
