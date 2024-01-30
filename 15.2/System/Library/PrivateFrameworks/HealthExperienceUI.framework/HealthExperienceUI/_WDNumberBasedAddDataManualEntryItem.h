@class NSNumberFormatter, WDManualDataEntryTableViewCell;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {
    WDManualDataEntryTableViewCell *_tableViewCell;
}

@property (nonatomic) unsigned long long manualEntryType;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;

- (void)setValue:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)generateValue;
- (id)tableViewCells;
- (void)manualDataEntryTableViewCell:(id)a0 valueDidChangeToValue:(id)a1;

@end
