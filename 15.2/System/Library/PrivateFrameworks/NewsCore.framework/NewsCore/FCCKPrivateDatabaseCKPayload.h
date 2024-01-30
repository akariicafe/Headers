@class NSArray;

@interface FCCKPrivateDatabaseCKPayload : NSObject {
    NSArray *_recordIDs;
    NSArray *_records;
    NSArray *_zoneIDs;
    NSArray *_zones;
    long long _destination;
}

- (void).cxx_destruct;

@end
