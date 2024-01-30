@class NSString, NSArray, NSDictionary, FCAsyncSerialQueue, FCCKPrivateDatabase;

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate> {
    FCCKPrivateDatabase *_database;
    NSArray *_recordZoneIDs;
    NSDictionary *_fcRecordZonesByName;
    NSDictionary *_ckRecordZonesByID;
    FCAsyncSerialQueue *_serialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)ensureRecordZoneExistsWithID:(id)a0 completionHandler:(id /* block */)a1;

@end
