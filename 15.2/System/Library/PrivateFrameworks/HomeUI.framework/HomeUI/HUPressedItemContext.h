@class NSTimer, HUElasticApplier, HFItem;

@interface HUPressedItemContext : NSObject

@property (retain, nonatomic) HFItem *item;
@property (retain, nonatomic) HUElasticApplier *applier;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) double beginTime;
@property (nonatomic) double rawInputProgress;
@property (nonatomic) double currentViewScale;
@property (nonatomic) BOOL isUserInitiated;
@property (retain, nonatomic) NSTimer *programmaticBounceTimer;

- (void).cxx_destruct;

@end
