@class NSArray;

@interface _WDMultiSelectManualEntryItem : WDAddDataManualEntryItem {
    NSArray *_tableViewCells;
}

@property (retain, nonatomic) NSArray *titles;
@property (nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (void)cellForItemTapped:(id)a0;
- (id)generateValue;
- (id)tableViewCells;

@end
