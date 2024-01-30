@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKAuxilliaryTextView *auxilliaryTextView;
@property (nonatomic) BOOL shouldCenter;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)shouldVerticallyCenter;

@end
