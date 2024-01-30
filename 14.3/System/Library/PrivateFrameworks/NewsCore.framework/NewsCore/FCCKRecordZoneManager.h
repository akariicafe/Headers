@class NSArray, NSDictionary, FCAsyncSerialQueue, NSString, FCCKPrivateDatabase;

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate>

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *fcRecordZonesByName;
@property (retain, nonatomic) NSDictionary *ckRecordZonesByID;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)recordZoneWithName:(id)a0;
- (id)initWithDatabase:(id)a0 recordZoneNames:(id)a1;
- (void)ensureRecordZoneExistsWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareRecordZonesForUseWithCompletionHandler:(id /* block */)a0;

@end
