@class NSData;

@interface CKDFetchZoneChangesRequestOperationResult : NSObject

@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasPendingArchivedRecords;

- (void).cxx_destruct;
- (id)init;

@end
