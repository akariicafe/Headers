@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

@interface HKSimpleDataEntryItem : NSObject

@property (weak, nonatomic) id<HKSimpleDataEntryItemDelegate> delegate;
@property (weak, nonatomic) id<HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate;
@property (nonatomic) unsigned long long placeholderType;

- (id)cell;
- (void).cxx_destruct;
- (void)beginEditing;
- (void)localeDidChange:(id)a0;
- (void)updateCellDisplay;
- (id)formattedKeyAndValue;
- (id)accessoryToolbar;
- (void)toolbarPrevButtonPressed:(id)a0;
- (void)toolbarNextButtonPressed:(id)a0;
- (void)toolbarDoneButtonPressed:(id)a0;

@end
