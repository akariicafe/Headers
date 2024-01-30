@class NSNumber, NSString;
@protocol WDAddDataManualEntryItemDelegate;

@interface WDAddDataManualEntryItem : NSObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *secondaryLabel;
@property (weak, nonatomic) id<WDAddDataManualEntryItemDelegate> delegate;

+ (id)twoPartDateRangeItemWithMaximumEndDate:(id)a0;
+ (id)numericItemWithManualEntryType:(unsigned long long)a0 numberFormatter:(id)a1;
+ (id)dateTimeItemWithMaximumDate:(id)a0 highlightWhenEditing:(BOOL)a1;
+ (id)dateItemWithMaximumDate:(id)a0;
+ (id)timeItemWithMaximumDate:(id)a0;
+ (id)dateTimeItemWithMaximumDate:(id)a0;
+ (id)twoPartDateTimeItemWithMaximumDate:(id)a0;
+ (id)durationItemWithMaximumDate:(id)a0;
+ (id)multiSelectItemWithEntries:(id)a0 selectedIndex:(long long)a1;
+ (id)heightPickerItemWithFeetUnitString:(id)a0 inchUnitString:(id)a1;

- (void).cxx_destruct;
- (id)generateValue;
- (void)resetItem;
- (id)tableViewCells;
- (id)_createUITableViewCell;
- (void)_didUpdateValue;
- (id)_createWDManualDataEntryTableViewCellWithDisplayName:(id)a0 unitName:(id)a1 entryType:(unsigned long long)a2 highlightWhenEditing:(BOOL)a3;
- (void)_disambiguateDateComponents:(id)a0 withCompletion:(id /* block */)a1;
- (void)cellForItemTapped:(id)a0;
- (void)setValue:(id)a0;
- (void)beginEditing;

@end
