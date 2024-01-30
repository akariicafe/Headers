@class NSString, HKDisplayType, WDFavoriteDisplayTypesController;

@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver>

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)a0;
- (void)updateSwitchValue;

@end
