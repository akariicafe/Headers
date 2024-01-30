@class NSString;
@protocol UIPrintOptionListDelegate;

@interface UIPrintOptionListCell : UIPrintOptionCell <UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) id<UIPrintOptionListDelegate> itemListDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)printOptionCellTapped;

@end
