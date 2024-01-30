@class NSString;

@interface FCCKDatabaseSubscriptionsMiddleware : NSObject <FCCKDatabaseRecordMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientToServerRecord:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordType:(id)a0 withRecordID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
- (id)_secureZoneID;
- (BOOL)_shouldMapZoneID:(id)a0 inDatabase:(id)a1;
- (id)serverToClientRecordZone:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)serverToClientRecordID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordZoneID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)serverToClientRecord:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)serverToClientRecordType:(id)a0 withRecordID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
- (id)serverToClientRecordZoneID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordZone:(id)a0 inDatabase:(id)a1 error:(id *)a2;

@end
