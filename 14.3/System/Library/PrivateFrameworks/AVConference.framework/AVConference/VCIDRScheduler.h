@class NSArray, NSMutableDictionary, NSMutableArray;

@interface VCIDRScheduler : NSObject {
    NSMutableDictionary *_schedulerGroups;
    NSMutableArray *_schedulerItems;
    NSArray *_streams;
    unsigned int _framesPerBasePeriod;
}

@property (readonly, nonatomic) unsigned int basePeriodMs;
@property (readonly, nonatomic) unsigned int captureFramerate;

+ (unsigned int)computeGcdForX:(unsigned int)a0 y:(unsigned int)a1;

- (void)dealloc;
- (id)description;
- (id)initWithStreams:(id)a0 captureFramerate:(unsigned int)a1;
- (void)computeBasePeriod;
- (BOOL)computeCaptureFramerate;
- (void)computeGroupList;
- (void)computeSchedulerItemList;
- (void)computeSchedulerItemsBudget;
- (void)computeSchedulerItemsPosition;
- (void)computeStreamsIDRPosition;
- (void)realignStreams;
- (void)placeRemainingItems:(id)a0 placedItems:(id)a1 leftItem:(id)a2 rightItem:(id)a3;

@end
