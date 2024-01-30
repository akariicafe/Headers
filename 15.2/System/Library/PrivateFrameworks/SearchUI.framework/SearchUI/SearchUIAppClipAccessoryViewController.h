@class TLKStoreButton;

@interface SearchUIAppClipAccessoryViewController : SearchUIAccessoryViewController

@property (retain) TLKStoreButton *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (unsigned long long)type;

@end
