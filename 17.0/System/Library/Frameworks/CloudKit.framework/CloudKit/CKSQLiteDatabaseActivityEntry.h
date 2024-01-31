@class NSNumber, NSString, NSDate;

@interface CKSQLiteDatabaseActivityEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *activityID;
@property (retain, nonatomic) NSNumber *databaseID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSDate *activityEarliestDate;
@property (retain, nonatomic) NSNumber *coalescingInterval;
@property (retain, nonatomic) NSNumber *separationInterval;
@property (retain, nonatomic) NSDate *activityLatestDate;
@property (retain, nonatomic) NSDate *activityNotBeforeDate;
@property (retain, nonatomic) NSDate *activityStartDate;
@property (retain, nonatomic) NSString *groupName;

- (unsigned long long)hash;
- (id)targetDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
