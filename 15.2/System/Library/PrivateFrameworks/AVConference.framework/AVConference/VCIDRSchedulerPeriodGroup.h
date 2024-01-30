@class NSMutableArray;

@interface VCIDRSchedulerPeriodGroup : NSObject {
    unsigned int _framesPerBasePeriod;
    NSMutableArray *_streams;
    NSMutableArray *_schedulerItems;
}

@property (readonly, nonatomic) unsigned int basePeriodCount;

- (id)description;
- (void)dealloc;
- (void)addStream:(id)a0;
- (void)computeStreamsIDRPosition;
- (id)initWithPeriodCount:(unsigned int)a0 framesPerBasePeriod:(unsigned int)a1;
- (id)computeScheduleItemList;

@end
