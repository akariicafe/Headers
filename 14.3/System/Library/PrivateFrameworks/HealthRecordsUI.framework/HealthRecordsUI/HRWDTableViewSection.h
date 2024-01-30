@protocol HRWDTableViewSectionDelegate;

@interface HRWDTableViewSection : NSObject

@property (readonly, nonatomic) id<HRWDTableViewSectionDelegate> delegate;
@property (readonly, nonatomic) unsigned long long section;

- (unsigned long long)numberOfRows;
- (double)estimatedHeightForRow:(unsigned long long)a0;
- (void)applicationDidEnterBackground;
- (void)activate;
- (void)viewWillAppear:(BOOL)a0;
- (double)heightForRow:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0 atSection:(unsigned long long)a1;
- (void)setUpWithTableViewController:(id)a0;
- (void)reloadAnimated:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (void)deactivate;
- (id)viewForHeader:(id)a0;
- (id)titleForHeader;
- (id)viewForFooter:(id)a0;
- (id)titleForFooter;
- (double)heightForHeader;
- (double)heightForFooter;
- (void)accessoryButtonTappedForRow:(unsigned long long)a0;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (id)willSelectRow:(id)a0;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;

@end
