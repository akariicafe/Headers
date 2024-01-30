@class NSString, CKServerChangeToken, NSSet, NSDate, NSNumber;

@interface NSCKDatabaseMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSNumber *databaseScopeNum;
@property (retain, nonatomic) NSString *databaseName;
@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) NSSet *recordZones;

+ (id)databaseMetadataForScope:(long long)a0 forStore:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
