@class NSMutableArray;

@interface VCIDRSchedulerItem : NSObject

@property (nonatomic) unsigned int framePosition;
@property (nonatomic) unsigned int weightFactor;
@property (nonatomic) unsigned int budgetInCaptureFrames;
@property (readonly, nonatomic) NSMutableArray *streams;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addStream:(id)a0;
- (long long)compareBudget:(id)a0;

@end
