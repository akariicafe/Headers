@class HUMediaServiceDefaultAccountsItemModule;
@protocol HUItemModuleControllerHosting, HUMediaServiceDefaultAccountsItemModuleControllerDelegate;

@interface HUMediaServiceDefaultAccountsItemModuleController : HUItemModuleController {
    id<HUItemModuleControllerHosting> _host;
}

@property (nonatomic) long long selectedMediaServiceIndex;
@property (nonatomic) BOOL shouldClearSpinnerOnNextUpdate;
@property (readonly, nonatomic) HUMediaServiceDefaultAccountsItemModule *module;
@property (readonly, weak, nonatomic) id<HUMediaServiceDefaultAccountsItemModuleControllerDelegate> delegate;

- (id)host;
- (void)setHost:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_indexPathForItem:(id)a0;
- (void)_clearSpinner;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 delegate:(id)a1 host:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (id)updateDefaultAccount:(id)a0;

@end
