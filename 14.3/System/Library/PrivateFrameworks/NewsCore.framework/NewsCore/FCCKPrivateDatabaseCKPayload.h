@class NSArray;

@interface FCCKPrivateDatabaseCKPayload : NSObject

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *zones;
@property (nonatomic) long long destination;

- (void).cxx_destruct;

@end
