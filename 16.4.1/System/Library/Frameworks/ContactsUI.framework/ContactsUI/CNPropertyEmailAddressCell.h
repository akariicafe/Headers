@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell

@property (nonatomic, getter=isVIP) BOOL VIP;

- (BOOL)shouldPerformDefaultAction;
- (BOOL)shouldShowStar;
- (void)updateTransportButtons;
- (void)updateValueWithPropertyItem:(id)a0;

@end
