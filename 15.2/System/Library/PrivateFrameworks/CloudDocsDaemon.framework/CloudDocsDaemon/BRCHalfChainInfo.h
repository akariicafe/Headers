@class BRFieldCKInfo, CKRecord;

@interface BRCHalfChainInfo : NSObject

@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic) BRFieldCKInfo *ckInfo;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 ckInfo:(id)a1;

@end
