@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject

@property (readonly, nonatomic) CKRecord *client;
@property (readonly, nonatomic) CKRecord *server;
@property (readonly, nonatomic) CKRecord *ancestor;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientRecord:(id)a0 serverRecord:(id)a1 ancestorRecord:(id)a2;

@end
