@class NSString, NSArray, NSData, NSDate, CKRecord;

@interface CKRecordXPCMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) CKRecord *serverRecord;
@property (copy, nonatomic) NSData *protectionData;
@property (copy, nonatomic) NSData *pcsKeyID;
@property (copy, nonatomic) NSArray *allPCSKeyIDs;
@property (copy, nonatomic) NSData *zoneishKeyID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)a0;

@end
