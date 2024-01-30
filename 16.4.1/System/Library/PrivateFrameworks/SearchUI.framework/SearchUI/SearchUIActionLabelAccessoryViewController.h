@class TLKStoreButton;

@interface SearchUIActionLabelAccessoryViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;

@end
