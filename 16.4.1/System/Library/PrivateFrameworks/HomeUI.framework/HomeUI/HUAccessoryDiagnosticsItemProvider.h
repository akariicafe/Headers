@class NSMutableSet, HUAccessoryDiagnosticsItemManager;

@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *diagnosticItems;
@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *itemManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithItemManager:(id)a0;
- (id)invalidationReasons;

@end
