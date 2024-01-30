@class NSArray, CKRecordZoneID, NSString;

@interface SCWZoneSchema : NSObject

@property (copy, nonatomic) NSArray *recordSchemas;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, nonatomic, getter=isAtomic) BOOL atomic;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSArray *allRecordFieldNames;

- (id)initWithName:(id)a0 atomic:(BOOL)a1 recordSchemas:(id)a2;
- (id)schemaForRecordType:(id)a0;
- (id)initWithName:(id)a0 atomic:(BOOL)a1 version:(unsigned long long)a2 recordSchemas:(id)a3;
- (BOOL)isValidRecord:(id)a0;
- (id)validateRecords:(id)a0;
- (void).cxx_destruct;

@end
