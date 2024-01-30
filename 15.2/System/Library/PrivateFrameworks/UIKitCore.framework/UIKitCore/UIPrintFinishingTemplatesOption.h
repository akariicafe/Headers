@class UITableView, NSArray, UITableViewCell, NSString, UIPrintPanelViewController;

@interface UIPrintFinishingTemplatesOption : NSObject <UIPrintOptionListDelegate>

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (weak, nonatomic) UITableView *finishingOptionsTableView;
@property (retain, nonatomic) NSArray *finishingTemplates;
@property (retain, nonatomic) NSArray *finishingTemplateNames;
@property (nonatomic) long long value;
@property (retain, nonatomic) UITableViewCell *finishingTemplatesCell;
@property (retain, nonatomic) NSString *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemList;
- (id)initWithTemplates:(id)a0 finishingTemplateNames:(id)a1 printPanelViewController:(id)a2 finishingOptionsTableView:(id)a3;
- (id)title;
- (id)selectedItem;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;

@end
