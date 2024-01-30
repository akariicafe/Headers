@class NSArray, NSMutableSet, NSMutableArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemTiler : NSObject {
    ATXDefaultWidgetStack *_defaultStack;
    NSMutableArray *_defaultWidgetsSmall;
    NSMutableArray *_defaultWidgetsMedium;
    NSMutableArray *_defaultWidgetsLarge;
    unsigned long long _gridSize;
    NSMutableSet *_usedBundleIds;
    NSMutableSet *_usedSpecialKinds;
}

@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;

+ (BOOL)_isSpecialAvocadoDescriptorKind:(id)a0;

- (void).cxx_destruct;
- (BOOL)_addFirstRow:(id)a0;
- (BOOL)_addRow:(id)a0 rowSizePreference:(unsigned long long)a1;
- (BOOL)_addFirstRowGridSize2:(id)a0;
- (BOOL)_addFirstRowGridSize3:(id)a0;
- (BOOL)_addSmallRow:(id)a0;
- (BOOL)_addMediumRow:(id)a0;
- (BOOL)_addLargeRow:(id)a0;
- (BOOL)_addSmallRowGridSize2:(id)a0;
- (BOOL)_addSmallRowGridSize3:(id)a0;
- (BOOL)_addMediumRowGridSize2:(id)a0;
- (BOOL)_addMediumRowGridSize3:(id)a0;
- (BOOL)_addLargeRowGridSize2:(id)a0;
- (id)_filterForNextUnusedWidgetDescriptor:(id)a0;
- (void)_unmarkWidgetAsUsed:(id)a0;
- (BOOL)_isWidgetAlreadyUsed:(id)a0;
- (void)_markWidgetAsUsed:(id)a0;
- (id)initWithDefaultStack:(id)a0 defaultWidgetsSmall:(id)a1 defaultWidgetsMedium:(id)a2 defaultWidgetsLarge:(id)a3 gridSize:(unsigned long long)a4;

@end
