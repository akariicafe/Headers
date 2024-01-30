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

- (void)beginEditing;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)generateValue;
- (id)tableViewCells;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)initWithMaximumEndDate:(id)a0;
- (void)_setupEntryItems;
- (void)_startItemDidChange;
- (void)_endItemDidChange;

@end
