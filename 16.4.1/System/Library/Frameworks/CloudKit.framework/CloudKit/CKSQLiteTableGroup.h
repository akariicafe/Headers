@class NSString, NSDictionary, NSDate, NSNumber, CKSQLiteDatabase;

@interface CKSQLiteTableGroup : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    NSDictionary *_tablesByName;
    BOOL _deleteTablesOnDealloc;
}

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSString *creatingClass;
@property (copy, nonatomic) NSDictionary *groupData;
@property (retain, nonatomic) NSDate *activityDate;
@property (readonly, nonatomic) CKSQLiteDatabase *db;
@property (readonly, nonatomic) BOOL didCreateDatabaseTables;

+ (double)expirationTime;
+ (BOOL)rebootShouldClearData;
+ (id)_tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2 create:(BOOL)a3;
+ (void)enumerateGroupsInDatabase:(id)a0 block:(id /* block */)a1;
+ (id)existingTableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (void)expireGroup:(id)a0 reason:(id)a1;
+ (id)groupNameWithDomain:(int)a0 domainIdentifier:(id)a1 groupName:(id)a2;
+ (void)groupWillExpire:(id)a0;
+ (void)purgeGroup:(id)a0;
+ (void)purgeGroupWithName:(id)a0 inDatabase:(id)a1;
+ (BOOL)supportsGroupCreation;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;

- (id)stringValueForKey:(id)a0;
- (BOOL)isInvalid;
- (id)dateValueForKey:(id)a0;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;
- (void)setDb:(id)a0;
- (id)initWithName:(id)a0;
- (id)_purge;
- (BOOL)isExpired;
- (id)dataValueForKey:(id)a0;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (id)finishInitializing:(BOOL)a0;
- (void)invalidateCachedStatements;
- (id)numberValueForKey:(id)a0;
- (id)objectValueForKey:(id)a0;
- (void)dealloc;
- (id)UUIDValueForKey:(id)a0;
- (long long)validateTables:(id)a0;
- (void)setObjectValue:(id)a0 forKey:(id)a1;
- (id)createTables;
- (id)updateGroupData:(id)a0;
- (id)description;
- (id)performDataMigration;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (id)dbTableNameForLogicalTableName:(id)a0;
- (void)_deleteTables;
- (id)_lockTables:(id)a0 andPerformBlock:(id /* block */)a1;
- (id)addTable:(id)a0;
- (id)allTables;
- (id)createDBTables;
- (void)groupWillPurge;
- (id)migrateDataFromGroup:(id)a0;
- (id)performGroupTransaction:(id /* block */)a0;
- (id)tableWithName:(id)a0;
- (void)updateLastUsedDate;

@end
