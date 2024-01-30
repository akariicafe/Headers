@class NSMutableArray;

@interface VCIDRSchedulerItem : NSObject

@property (nonatomic) unsigned int framePosition;
@property (nonatomic) unsigned int weightFactor;
@property (nonatomic) unsigned int budgetInCaptureFrames;
@property (readonly, nonatomic) NSMutableArray *streams;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)addStream:(id)a0;
- (long long)compareBudget:(id)a0;

@end
