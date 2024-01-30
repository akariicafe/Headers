@interface SBIconListModelRepairUtilities : NSObject

+ (BOOL)_findAndRepairEmptyRows:(id)a0 avoidingIcons:(id)a1 gridCellInfo:(id)a2;
+ (unsigned long long)_maxGridCellIndexWithIconCount:(unsigned long long)a0 gridCellInfo:(id)a1;
+ (id)_firstIconOfSizeClass:(unsigned long long)a0 withIcons:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (BOOL)_findAndRepairSingleIconGaps:(id)a0 gridCellInfo:(id)a1;
+ (id)repairModelByEliminatingGapsInIcons:(id)a0 avoidingIcons:(id)a1 gridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })a3 iconLayoutBehavior:(unsigned long long)a4;
+ (BOOL)_findAndRepairWidgetSizedGaps:(id)a0 widgetGridSizeClass:(unsigned long long)a1 widgetGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a2 iconLayoutBehavior:(unsigned long long)a3 gridCellInfo:(id)a4;

@end
