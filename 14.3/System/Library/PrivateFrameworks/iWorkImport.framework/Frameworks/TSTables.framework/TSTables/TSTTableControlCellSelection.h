@interface TSTTableControlCellSelection : TSKSelection

@property (readonly, nonatomic, getter=isKeyboardShown) BOOL keyboardShown;

+ (Class)archivedSelectionClass;
+ (id)controlCellSelection;

- (id)copy;
- (id)initWithKeyboardShown:(BOOL)a0;

@end
