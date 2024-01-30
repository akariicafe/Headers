@class NSNumber, NSUUID, NSString;

@interface CKVItemMetaRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) NSNumber *itemIdHash;
@property (readonly, nonatomic) NSNumber *itemBufferHash;
@property (readonly, nonatomic) NSNumber *created;
@property (readonly, nonatomic) NSNumber *modified;
@property (readonly, nonatomic) NSUUID *recordId;
@property (readonly, nonatomic) NSNumber *rank;
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
- (BOOL)isEqualToItemMetaRecord:(id)a0;

@end
