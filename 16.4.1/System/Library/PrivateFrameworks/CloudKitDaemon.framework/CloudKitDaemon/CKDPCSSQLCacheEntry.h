@class NSString, NSNumber;

@interface CKDPCSSQLCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *databaseScope;
@property (retain, nonatomic) NSNumber *itemType;
@property (retain, nonatomic) id CKDPCSData;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *zoneID;
@property (retain, nonatomic) NSString *shareID;
@property (retain, nonatomic) NSString *parentID;

- (id)description;
- (void).cxx_destruct;

@end
