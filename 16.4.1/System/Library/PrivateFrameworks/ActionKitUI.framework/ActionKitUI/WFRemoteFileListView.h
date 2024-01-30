@class NSDateFormatter, NSDictionary, NSString, UILocalizedIndexedCollation, UITableView;
@protocol WFRemoteFileListViewDelegate;

@interface WFRemoteFileListView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) UILocalizedIndexedCollation *collation;
@property (copy, nonatomic) NSDictionary *filesBySection;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } verticalScrollIndicatorInsets;
@property (weak, nonatomic) id<WFRemoteFileListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (void)setFiles:(id)a0;
- (id)cellAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)fileAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collation:(id)a1;
- (void)updateCheckmarkForFile:(id)a0;

@end
