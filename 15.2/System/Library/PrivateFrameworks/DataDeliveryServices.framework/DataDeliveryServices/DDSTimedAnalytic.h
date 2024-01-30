@class NSString;

@interface DDSTimedAnalytic : NSObject

@property (nonatomic) unsigned long long retries;
@property (nonatomic) BOOL success;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) int lastAction;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long durationInSec;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithAction:(int)a0;

@end
