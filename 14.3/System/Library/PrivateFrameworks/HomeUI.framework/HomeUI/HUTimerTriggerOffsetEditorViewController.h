@class NSString, NSDateComponents;
@protocol HUTimerTriggerOffsetEditorDelegate;

@interface HUTimerTriggerOffsetEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate>

@property (retain, nonatomic) NSDateComponents *selectedOffset;
@property (readonly, nonatomic) NSString *significantEvent;
@property (readonly, nonatomic) NSDateComponents *currentOffset;
@property (weak, nonatomic) id<HUTimerTriggerOffsetEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)viewDidLoad;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)initWithSignificantEvent:(id)a0 currentOffset:(id)a1 delegate:(id)a2;
- (void)significantEventOffsetPicker:(id)a0 didSelectOffset:(id)a1;

@end
