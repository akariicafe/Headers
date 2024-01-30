@class TLKTextView;

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView

@property (retain, nonatomic) TLKTextView *viewForFirstAndLastBaseline;

- (void).cxx_destruct;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;

@end
