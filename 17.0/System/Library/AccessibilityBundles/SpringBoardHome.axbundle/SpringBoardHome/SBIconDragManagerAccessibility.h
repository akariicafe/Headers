@interface SBIconDragManagerAccessibility : __SBIconDragManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)iconDropSession:(id)a0 didPauseAtLocation:(struct CGPoint { double x0; double x1; })a1 inIconListView:(id)a2;
- (void)iconDropSessionDidEnd:(id)a0 identifier:(id)a1 draggedIconIdentifiers:(id)a2;
- (id)iconDropSessionDidUpdate:(id)a0 inIconListView:(id)a1;
- (id)_accessibilityGetLastAnnouncedIcon;
- (void)_accessibilitySetLastAnnouncedIcon:(id)a0;
- (id)_axIconForIconView:(id)a0;
- (id)_axRowColAnnouncementTimer;
- (unsigned long long)_axRowColScheduledCol;
- (unsigned long long)_axRowColScheduledRow;
- (void)_axScheduleAnnouncementForRow:(unsigned long long)a0 col:(unsigned long long)a1;
- (void)_axSetRowColAnnouncementTimer:(id)a0;
- (void)_axSetRowColScheduledCol:(unsigned long long)a0;
- (void)_axSetRowColScheduledRow:(unsigned long long)a0;

@end
