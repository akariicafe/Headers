@class NSString, CKRecordID;

@interface ICUserSpecificRecordID : NSObject

@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSString *shareOwnerName;
@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSString *userSpecificOwnerName;
@property (retain, nonatomic) NSString *sharedRecordName;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecordID *sharedRecordID;
@property (readonly, nonatomic) NSString *sharedRecordType;

+ (id)userSpecificRecordTypeFromSharedRecordType:(id)a0;
+ (BOOL)isUserSpecificRecordType:(id)a0;
+ (BOOL)isUserSpecificRecordID:(id)a0;

- (void).cxx_destruct;
- (id)initWithRecordType:(id)a0 shareOwnerName:(id)a1 databaseScope:(long long)a2 zoneName:(id)a3 userSpecificOwnerName:(id)a4 sharedRecordName:(id)a5;
- (id)initWithRecordName:(id)a0;

@end
