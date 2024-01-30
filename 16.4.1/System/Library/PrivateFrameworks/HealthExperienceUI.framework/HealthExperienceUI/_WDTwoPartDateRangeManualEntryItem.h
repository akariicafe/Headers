@class NSString, WDAddDataManualEntryItem, NSDate;

@interface _WDTwoPartDateRangeManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_endItem;
    NSDate *_maximumEndDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)_endItemDidChange;
- (void)_setupEntryItems;
- (void)_startItemDidChange;
- (id)generateValue;
- (id)initWithMaximumEndDate:(id)a0;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)tableViewCells;

@end
