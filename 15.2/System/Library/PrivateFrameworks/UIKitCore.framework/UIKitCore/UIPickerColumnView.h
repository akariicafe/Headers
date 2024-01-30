@class UIColor, NSString, UIPickerTableView, UIView, UIPickerView;

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {
    UIPickerTableView *_topTable;
    UIPickerTableView *_middleTable;
    UIPickerTableView *_bottomTable;
    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
    double _middleBarHeight;
    UIPickerView *_pickerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tableFrame;
}

@property (nonatomic) BOOL isNoLongerInUse;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionBarRect;
@property (readonly, nonatomic) long long selectionBarRow;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (nonatomic) double rowHeight;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } perspectiveTransform;
@property (nonatomic) double leftHitTestExtension;
@property (nonatomic) double rightHitTestExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_containsTable:(id)a0;
- (void)reloadData;
- (id)_allVisibleCells;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)a0 animated:(BOOL)a1;
- (BOOL)isRowChecked:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)endUpdates;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2 updateChecked:(BOOL)a3;
- (id)_viewToAddFocusLayer;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleGlobalRows;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)_horizontalBiasForEndTables;
- (BOOL)_pointLiesWithinEffectiveTableBounds:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canBecomeFocused;
- (void)markAsNoLongerInUse;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFocusRegionFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)cellForRowAtIndexPath:(id)a0;
- (id)_visibleCellClosestToPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void).cxx_destruct;
- (void)beginUpdates;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForTableWithPerspectiveTranslationX:(double)a0;
- (id)_focusRingPath;
- (void)_pickerTableViewDidChangeContentOffset:(id)a0;
- (void)_centerTableInContainer:(id)a0;
- (id)_createContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)_createTableViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_soundsEnabled;
- (BOOL)_usesCheckSelection;
- (id)_preferredTable;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForTableWithTranslationX:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 middleBarHeight:(double)a2 rowHeight:(double)a3 pickerView:(id)a4 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a5;
- (void)_moveTableViewIfNecessary:(id)a0 toContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)pickerTableView:(id)a0 didChangeSelectionBarRowFrom:(long long)a1 to:(long long)a2;
- (void)_sendCheckedRow:(long long)a0 inTableView:(id)a1 checked:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tableFrame;

@end
