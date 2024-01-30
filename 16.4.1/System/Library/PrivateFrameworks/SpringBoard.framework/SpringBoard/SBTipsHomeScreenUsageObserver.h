@class NSString, SBIconController;

@interface SBTipsHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver>

@property (readonly, weak, nonatomic) SBIconController *iconController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconController:(id)a0;
- (void).cxx_destruct;
- (void)homeScreenUsageAggregatorDidNoteEditingModeEntered:(id)a0;

@end
