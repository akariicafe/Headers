@class NSString;
@protocol HUControlPanelRule;

@interface HUSwitchControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (readonly, nonatomic) id<HUControlPanelRule> rule;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowSectionTitleForItem:(id)a0;
- (void)setupControlsForCell:(id)a0 item:(id)a1;
- (id)valueTransformerForControlItem:(id)a0;

@end
