@class NSNumberFormatter, WDManualDataEntryTableViewCell;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {
    WDManualDataEntryTableViewCell *_tableViewCell;
}

@property (nonatomic) unsigned long long manualEntryType;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;

- (void)manualDataEntryTableViewCell:(id)a0 valueDidChangeToValue:(id)a1;
- (void).cxx_destruct;
- (id)generateValue;
- (void)setTitle:(id)a0;
- (id)tableViewCells;
- (void)setValue:(id)a0;
- (void)beginEditing;

@end
