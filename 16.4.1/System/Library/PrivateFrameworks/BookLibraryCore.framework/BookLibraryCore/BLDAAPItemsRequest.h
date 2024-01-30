@class NSNumber;

@interface BLDAAPItemsRequest : BLDAAPURLRequest

@property (retain, nonatomic) NSNumber *bagDatabaseID;

- (void).cxx_destruct;
- (id)createDaapURL:(id)a0;
- (id)initWithDSID:(id)a0 reason:(long long)a1 databaseID:(id)a2 body:(id)a3;

@end
