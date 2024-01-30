@class NSArray;

@interface SGMIDomainCountingTableGuardedData : NSObject

@property (nonatomic) long long schemaVersion;
@property (retain, nonatomic) NSArray *currentColumns;

- (void).cxx_destruct;
- (id)init;

@end
