@class NSString, CKRecordID, CKRecord;

@interface CKDRecordResponse : NSObject

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) CKRecord *record;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;

@end
