@class NSString, HUTriggerTimeConditionDetailEditorItemManager, HFTimeRangeCondition;
@protocol HUTriggerTimeConditionDetailEditorDelegate;

@interface HUTriggerTimeConditionDetailEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate, HUInlineDatePickerCellDelegate>

@property (readonly, nonatomic) HUTriggerTimeConditionDetailEditorItemManager *itemManager;
@property (readonly, nonatomic) HFTimeRangeCondition *rangeCondition;
@property (readonly, weak, nonatomic) id<HUTriggerTimeConditionDetailEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)allCellClasses;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)datePickerCell:(id)a0 didSelectDate:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithRangeCondition:(id)a0 delegate:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)significantEventOffsetPicker:(id)a0 didSelectOffset:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
