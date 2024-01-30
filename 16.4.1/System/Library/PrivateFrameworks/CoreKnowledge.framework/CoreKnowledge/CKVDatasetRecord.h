@class NSNumber, NSString;

@interface CKVDatasetRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSNumber *validityHash;
@property (readonly, nonatomic) NSNumber *modified;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)_optionsDescription:(unsigned long long)a0;
+ (id)genSQLCreateTable;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)isRanked;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToDatasetRecord:(id)a0;
- (id)recordToDatasetInfoWithItemCount:(unsigned int)a0 capturedTime:(id)a1 error:(id *)a2;

@end
