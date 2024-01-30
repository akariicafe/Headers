@interface SBIconListModelRepairUtilities : NSObject

+ (BOOL)_findAndRepairEmptyRows:(id)a0 gridCellInfo:(id)a1;
+ (BOOL)_findAndRepairSmallWidgetGaps:(id)a0 smallWidgetGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a1 gridCellInfo:(id)a2;
+ (BOOL)_findAndRepairSingleIconGaps:(id)a0 gridCellInfo:(id)a1;
+ (unsigned long long)_maxGridCellIndexWithIconCount:(unsigned long long)a0 gridCellInfo:(id)a1;
+ (id)_firstIconOfSizeClass:(unsigned long long)a0 withIcons:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)repairModelByEliminatingGapsInIcons:(id)a0 gridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a1 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; })a2;

@end
