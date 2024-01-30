@class NSArray;
@protocol ATXDefaultHomeScreenItemTiler;

@interface ATXDefaultHomeScreenItemTilerWrapper : NSObject {
    id<ATXDefaultHomeScreenItemTiler> _tiler;
}

@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;

- (void).cxx_destruct;
- (id)initWithDefaultStack:(id)a0 defaultWidgetsSmall:(id)a1 defaultWidgetsMedium:(id)a2 defaultWidgetsLarge:(id)a3 defaultWidgetsExtraLarge:(id)a4 widgetFamilyMask:(unsigned long long)a5 gridSize:(unsigned long long)a6;

@end
