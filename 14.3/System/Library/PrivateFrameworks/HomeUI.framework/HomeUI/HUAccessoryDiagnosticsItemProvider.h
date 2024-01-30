@class NSMutableSet, HUAccessoryDiagnosticsItemManager;

@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *diagnosticItems;
@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *itemManager;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)initWithItemManager:(id)a0;

@end
