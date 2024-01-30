@class NSString, NSDictionary, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSSyncEngineLastChanceDataStore : NSObject <DNDSSyncEngineLastChanceDataStoring> {
    NSMutableDictionary *_queue_recordsByID;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSDictionary *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (id)_encodedDataFromRecord:(id)a0;
- (void)addRecord:(id)a0;
- (id)initWithURL:(id)a0;
- (void)_queue_read;
- (void)removeRecordsWithZoneID:(id)a0;
- (void)_queue_write;
- (void)removeRecordWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)recordsWithZoneID:(id)a0;
- (id)_decodeRecordFromData:(id)a0;

@end
