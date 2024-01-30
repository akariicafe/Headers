@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell

@property (nonatomic, getter=isVIP) BOOL VIP;

- (BOOL)shouldShowStar;
- (void)updateTransportButtons;
- (BOOL)shouldPerformDefaultAction;
- (void)updateValueWithPropertyItem:(id)a0;

@end
