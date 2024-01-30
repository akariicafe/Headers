@class NSArray;

@interface SGMIDomainCountingTableGuardedData : NSObject

@property (nonatomic) long long schemaVersion;
@property (retain, nonatomic) NSArray *currentColumns;

- (id)init;
- (void).cxx_destruct;

@end
