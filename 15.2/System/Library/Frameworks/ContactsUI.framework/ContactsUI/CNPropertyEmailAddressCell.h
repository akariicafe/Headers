@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell

@property (nonatomic, getter=isVIP) BOOL VIP;

- (void)updateValueWithPropertyItem:(id)a0;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)shouldShowStar;
- (void)updateTransportButtons;

@end
