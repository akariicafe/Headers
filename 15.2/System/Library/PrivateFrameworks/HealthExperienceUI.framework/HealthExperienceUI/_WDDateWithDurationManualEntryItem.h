@class NSString, WDAddDataManualEntryItem, NSDate;

@interface _WDDateWithDurationManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_durationItem;
    NSDate *_maximumStartDate;
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
- (id)initWithMaximumDate:(id)a0;
- (void)_setupEntryItems;

@end
