@class NSNumber;

@interface VUIDropOnTabConfig : NSObject

@property (retain, nonatomic) NSNumber *daysWithoutOpeningThreshold;
@property (retain, nonatomic) NSNumber *daysWithoutPlaybackThreshold;
@property (nonatomic) unsigned long long dropOnTabIndex;

- (id)init;
- (void).cxx_destruct;

@end
