@class PSListController;

@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier

@property (weak, nonatomic) PSListController *hostController;

- (void).cxx_destruct;
- (void)setFallbackEnabled:(id)a0 specifier:(id)a1;
- (id)isFallbackEnabled:(id)a0;
- (id)initWithHostController:(id)a0;

@end
