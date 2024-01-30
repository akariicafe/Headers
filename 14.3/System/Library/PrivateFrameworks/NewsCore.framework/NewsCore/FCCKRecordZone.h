@class CKRecordZoneID, FCCKPrivateDatabase;
@protocol FCCKRecordZoneDelegate;

@interface FCCKRecordZone : NSObject

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (weak, nonatomic) id<FCCKRecordZoneDelegate> delegate;
@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (getter=isZoneReady) BOOL zoneReady;

- (void).cxx_destruct;
- (void)performActionWithRecordZone:(id /* block */)a0;
- (void)fetchChangesWithChangeToken:(id)a0 desiredKeys:(id)a1 fetchAllChanges:(BOOL)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (id)initWithDatabase:(id)a0 delegate:(id)a1 recordZoneID:(id)a2;
- (id)description;

@end
