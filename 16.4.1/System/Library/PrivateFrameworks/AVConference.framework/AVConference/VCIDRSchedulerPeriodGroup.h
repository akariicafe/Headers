@class NSMutableArray;

@interface VCIDRSchedulerPeriodGroup : NSObject {
    unsigned int _framesPerBasePeriod;
    NSMutableArray *_streams;
    NSMutableArray *_schedulerItems;
}

@property (readonly, nonatomic) unsigned int basePeriodCount;

- (void)dealloc;
- (id)description;
- (void)addStream:(id)a0;
- (id)computeScheduleItemList;
- (void)computeStreamsIDRPosition;
- (id)initWithPeriodCount:(unsigned int)a0 framesPerBasePeriod:(unsigned int)a1;

@end
