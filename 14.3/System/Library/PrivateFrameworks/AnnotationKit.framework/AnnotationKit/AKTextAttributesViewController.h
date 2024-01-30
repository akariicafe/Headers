@class UITableViewCell, NSString, AKController, AKFontChooserUIItemDelegate, AKTextAttributesUIItemDelegate, AKFontListController, NSNumber, UIColor;

@interface AKTextAttributesViewController : UITableViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem>

@property (retain, nonatomic) UITableViewCell *sizeTableCell;
@property (retain, nonatomic) UITableViewCell *alignmentTableCell;
@property (retain, nonatomic) UIColor *currentFontColor;
@property (retain, nonatomic) NSString *currentFontFamilyName;
@property (retain, nonatomic) NSNumber *currentFontSize;
@property (nonatomic) id currentAlignment;
@property (nonatomic) id currentStyle;
@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKFontListController *presetFontController;
@property long long lastActionID;
@property (retain) id lastActionValue;
@property (retain, nonatomic) AKFontChooserUIItemDelegate *fontUIItemDelegate;
@property (retain, nonatomic) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontSizeNumberFormatter;

- (void)_commonInit;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithController:(id)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)convertTextAttributes:(id)a0;
- (void)syncTextAttributesToUI:(id)a0;
- (id)convertFont:(id)a0;
- (void)syncFontsToUI:(id)a0;
- (BOOL)validateUserInterfaceItems;
- (id)createRowFontSizeCell;
- (id)createRowAlignmentCell;
- (void)didSelectFont:(id)a0;
- (void)_sizeStepperValueChanged:(id)a0;
- (void)_alignmentSegmentChanged:(id)a0;
- (void)_sendFontAction;
- (void)_sendTextAttributesAction;
- (void)_styleSegmentChanged:(id)a0;

@end
