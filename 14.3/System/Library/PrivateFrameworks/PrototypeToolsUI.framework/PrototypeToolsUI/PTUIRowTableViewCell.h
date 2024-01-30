@class PTRow, NSString;

@interface PTUIRowTableViewCell : UITableViewCell <PTRowObserver>

@property (retain, nonatomic) PTRow *row;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyleForRow:(id)a0;
+ (id)reuseIdentifierForRow:(id)a0;
+ (double)cellHeightForRow:(id)a0;

- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateDisplayedValue;
- (void)rowDidChangeValue:(id)a0;
- (void)rowDidChangeTitle:(id)a0;
- (void)rowDidChangeImage:(id)a0;
- (void)rowDidReload:(id)a0;
- (void)updateCellCharacteristics;
- (void)updateDisplayedContent;

@end
