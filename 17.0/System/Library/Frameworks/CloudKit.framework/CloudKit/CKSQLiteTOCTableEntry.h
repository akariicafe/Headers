@class NSNumber, NSString, NSDictionary;

@interface CKSQLiteTOCTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *tableID;
@property (copy, nonatomic) NSString *logicalTableName;
@property (copy, nonatomic) NSString *dbTableName;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *dbVersion;
@property (copy, nonatomic) NSString *creatingClass;
@property (retain, nonatomic) NSDictionary *propertyData;
@property (retain, nonatomic) NSString *creator;

- (void).cxx_destruct;

@end
