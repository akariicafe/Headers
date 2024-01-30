@interface SFAccountManagerTipCell : SFAccountManagerPlatterWithDeclineButtonCell

@property (readonly, nonatomic) long long tipType;

- (void)configureForTip:(long long)a0;

@end
