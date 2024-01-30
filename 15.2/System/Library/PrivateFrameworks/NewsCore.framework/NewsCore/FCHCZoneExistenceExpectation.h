@class NSString, CKRecordZoneID, CKDatabase;

@interface FCHCZoneExistenceExpectation : NSObject <FCHCExpectation>

@property (retain, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) BOOL shouldExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validate;
- (void).cxx_destruct;

@end
