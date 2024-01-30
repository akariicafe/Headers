@class NSArray, CKDatabase;

@interface FCCKPrivateDatabaseCKProperties : NSObject

@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) CKDatabase *databaseWithZoneWidePCS;
@property (readonly, nonatomic) CKDatabase *secureDatabase;
@property (retain, nonatomic) NSArray *containers;

- (void).cxx_destruct;
- (id)initWithContainers:(id)a0 database:(id)a1 databaseWithZoneWidePCS:(id)a2 secureDatabase:(id)a3;

@end
