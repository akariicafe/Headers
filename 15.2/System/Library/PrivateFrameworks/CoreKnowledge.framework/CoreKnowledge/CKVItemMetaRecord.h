@class NSNumber, NSUUID, NSString;

@interface CKVItemMetaRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) NSNumber *itemIdHash;
@property (readonly, nonatomic) NSNumber *itemBufferHash;
@property (readonly, nonatomic) NSNumber *validFrom;
@property (readonly, nonatomic) NSNumber *validTo;
@property (readonly, nonatomic) NSUUID *recordId;
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
- (BOOL)isEqualToItemMetaRecord:(id)a0;

@end
