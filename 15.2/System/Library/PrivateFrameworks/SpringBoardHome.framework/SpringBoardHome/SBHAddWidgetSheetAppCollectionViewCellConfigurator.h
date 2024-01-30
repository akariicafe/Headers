@class SBHIconImageCache, NSMutableDictionary;

@interface SBHAddWidgetSheetAppCollectionViewCellConfigurator : NSObject {
    NSMutableDictionary *_nonAppIconImageCache;
}

@property (readonly, nonatomic) SBHIconImageCache *iconImageCache;

- (void).cxx_destruct;
- (void)configureCell:(id)a0 withApplicationWidgetCollection:(id)a1;
- (id)initWithIconCache:(id)a0;

@end
