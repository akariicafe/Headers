@class NSString, HKSimpleDataEntryPlainTextCell;

@interface HKSimpleDataEntryPlainTextItem : HKSimpleDataEntryItem <HKSimpleDataEntryCellDelegate> {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSString *_text;
    long long _intention;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)updateCellDisplay;
- (void)textFieldDidChangeValue:(id)a0 forCell:(id)a1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)a0 registrantModelKey:(id)a1 defaultText:(id)a2 intention:(long long)a3;

@end
