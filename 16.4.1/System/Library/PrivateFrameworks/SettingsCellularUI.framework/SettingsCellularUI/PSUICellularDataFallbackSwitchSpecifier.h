@class PSListController;

@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier

@property (weak, nonatomic) PSListController *hostController;

- (void).cxx_destruct;
- (id)initWithHostController:(id)a0;
- (id)isFallbackEnabled:(id)a0;
- (void)setFallbackEnabled:(id)a0 specifier:(id)a1;

@end
