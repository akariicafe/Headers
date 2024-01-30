@class CKRecordZoneID;

@interface _DKEventCKConverter : NSObject {
    CKRecordZoneID *_zoneID;
}

- (id)initWithZoneID:(id)a0;
- (void).cxx_destruct;
- (id)eventIDsFromRecordIDsAndTypes:(id)a0;
- (id)eventsFromRecords:(id)a0;
- (id)recordIDsFromEventIDs:(id)a0;
- (id)recordsFromEvents:(id)a0;

@end
