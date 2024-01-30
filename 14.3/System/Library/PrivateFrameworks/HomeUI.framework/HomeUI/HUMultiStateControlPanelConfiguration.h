@class NSString;
@protocol HUControlPanelRule;

@interface HUMultiStateControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (readonly, nonatomic) id<HUControlPanelRule> rule;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupControlsForCell:(id)a0 item:(id)a1;

@end
