@class NSNumber, NSString, CKVOriginApp;

@interface CKVDatasetRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) CKVOriginApp *originApp;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSNumber *validTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)recordFromDatabaseValueRow:(id)a0;
+ (id)genSQLCreateTable;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToDatasetRecord:(id)a0;

@end
