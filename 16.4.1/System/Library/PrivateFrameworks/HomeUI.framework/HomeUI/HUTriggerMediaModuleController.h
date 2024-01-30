@class NSString;
@protocol HUTriggerMediaModuleControllerDelegate;

@interface HUTriggerMediaModuleController : HUItemModuleController <HUMediaSelectionViewControllerDelegate>

@property (weak, nonatomic) id<HUTriggerMediaModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (id)mediaSelectionViewController:(id)a0 messageForMediaPickerUnavailableReason:(long long)a1;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;

@end
