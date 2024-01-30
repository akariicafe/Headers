@class NSString, UIPrintOptionListViewController;
@protocol UIPrintOptionListDelegate;

@interface UIPrintOptionListCell : UIPrintOptionCell <UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) UIPrintOptionListViewController *printOptionListViewController;
@property (weak, nonatomic) id<UIPrintOptionListDelegate> itemListDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)printOptionCellTapped;

@end
