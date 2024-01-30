@class NSString, CKRecordID;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;

- (void).cxx_destruct;
- (id)initWithRecordID:(id)a0 recordType:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
