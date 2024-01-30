@class NSMutableSet;

@interface _BRCUploadInfo : _BRCTransferInfo

@property (readonly, nonatomic) NSMutableSet *outOfQuotaDocIDs;
@property (readonly, nonatomic) BOOL allUploadsPendingQuota;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;

@end
