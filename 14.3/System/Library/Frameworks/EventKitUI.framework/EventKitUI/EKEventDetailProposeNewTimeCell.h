@interface EKEventDetailProposeNewTimeCell : EKEventDetailCell

- (BOOL)update;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (BOOL)shouldDisplayForEvent;
- (BOOL)hasCustomLayout;

@end
