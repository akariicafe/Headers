@class NSArray, NSString, ATXDefaultHomeScreenItemTilerHelper, NSMutableArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemTilerGridSize3 : NSObject <ATXDefaultHomeScreenItemTiler> {
    ATXDefaultWidgetStack *_defaultStack;
    NSMutableArray *_defaultWidgetsSmall;
    NSMutableArray *_defaultWidgetsMedium;
    NSMutableArray *_defaultWidgetsLarge;
    unsigned long long _widgetFamilyMask;
    ATXDefaultHomeScreenItemTilerHelper *_tilerHelper;
}

@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefaultStack:(id)a0 defaultWidgetsSmall:(id)a1 defaultWidgetsMedium:(id)a2 defaultWidgetsLarge:(id)a3 defaultWidgetsExtraLarge:(id)a4 widgetFamilyMask:(unsigned long long)a5;
- (BOOL)_addMediumRow:(id)a0;
- (BOOL)_addRow:(id)a0 rowType:(unsigned long long)a1;
- (BOOL)_addFirstRow:(id)a0;
- (BOOL)_addRow:(id)a0 rowSizePreference:(unsigned long long)a1 allowAlternateRowSizeAsBackup:(BOOL)a2;
- (BOOL)_addSmallRow:(id)a0;
- (void).cxx_destruct;

@end
