@class NSMutableArray;

@interface MNDurationRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long intervalIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
