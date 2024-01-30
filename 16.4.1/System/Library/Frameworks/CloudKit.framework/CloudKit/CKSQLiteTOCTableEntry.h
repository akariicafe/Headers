@class NSString, NSNumber, NSDictionary;

@interface CKSQLiteTOCTableEntry : NSObject

@property (copy, nonatomic) NSString *logicalTableName;
@property (copy, nonatomic) NSString *dbTableName;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *dbVersion;
@property (copy, nonatomic) NSString *creatingClass;
@property (retain, nonatomic) NSDictionary *propertyData;

- (id)description;
- (void).cxx_destruct;

@end
