@class NSArray, NSString, PKPaymentPassDetailViewController;

@interface PKPaymentPassDetailWrapperSectionController : NSObject <PKTableViewSectionController> {
    PKPaymentPassDetailViewController *_viewController;
}

@property (retain, nonatomic) NSArray *sectionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)editingStyleForRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (double)estimatedHeightForRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)a0;
- (BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)a0;
- (BOOL)shouldHighlightRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 sectionIdentifier:(id)a3;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSectionIdentifier:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSectionIdentifier:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)tableView:(id)a0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)tableView:(id)a0 viewForFooterInSectionIdentifier:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;
- (id)titleForHeaderInSectionIdentifier:(id)a0;

@end
