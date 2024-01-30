@class NSString, MCProfileWarning, UITableView;

@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MCProfileWarning *warning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (id)init;
- (void).cxx_destruct;
- (id)titleForHeader;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)a0;
- (id)initWithWarning:(id)a0;
- (void)registerCellClassWithTableView:(id)a0;
- (double)heightForRowAtIndex:(unsigned long long)a0;

@end
