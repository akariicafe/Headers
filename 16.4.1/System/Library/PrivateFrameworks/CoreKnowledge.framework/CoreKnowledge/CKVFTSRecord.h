@class NSString, NSUUID, CKVOriginApp;

@interface CKVFTSRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *fieldValue;
@property (readonly, nonatomic) CKVOriginApp *originApp;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSUUID *recordId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateTable;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (id)initWithFieldType:(long long)a0 fieldValue:(id)a1 originApp:(id)a2 itemType:(long long)a3 recordId:(id)a4;
- (BOOL)isEqualToFTSRecord:(id)a0;

@end
