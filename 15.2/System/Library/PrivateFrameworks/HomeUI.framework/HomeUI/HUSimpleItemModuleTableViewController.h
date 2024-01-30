@class NSArray, NSString;

@interface HUSimpleItemModuleTableViewController : HUItemTableViewController <UITextViewDelegate>

@property (readonly, nonatomic) NSArray *moduleControllers;
@property (copy, nonatomic) id /* block */ moduleControllerBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)updateMode;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_updateTitle;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initWithTableViewStyle:(long long)a0 moduleCreator:(id /* block */)a1 moduleControllerBuilder:(id /* block */)a2;
- (void)dismissTextViewController;

@end
