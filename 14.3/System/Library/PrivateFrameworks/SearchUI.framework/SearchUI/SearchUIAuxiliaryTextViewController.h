@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKAuxilliaryTextView *auxilliaryTextView;
@property (nonatomic) BOOL shouldCenter;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)shouldVerticallyCenter;
- (id)setupView;

@end
