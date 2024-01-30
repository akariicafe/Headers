@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *appStoreButton;
@property (nonatomic) BOOL appIsInstalled;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (unsigned long long)type;
- (id)setupView;
- (void)buttonPressed;

@end
