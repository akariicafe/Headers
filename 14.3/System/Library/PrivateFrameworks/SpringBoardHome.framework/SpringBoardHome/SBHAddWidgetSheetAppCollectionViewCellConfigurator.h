@class NSMutableDictionary;

@interface SBHAddWidgetSheetAppCollectionViewCellConfigurator : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;

- (void).cxx_destruct;
- (void)configureCell:(id)a0 withApplicationWidgetCollection:(id)a1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a2;
- (id)_applicationCellTitleForApplicationWidgetCollection:(id)a0;
- (id)_applicationCellIconImageForApplicationWidgetCollection:(id)a0 withIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)_cacheKeyForApplicationWidgetCollection:(id)a0 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)_newIconImageForApplicationWidgetCollection:(id)a0 withIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;

@end
