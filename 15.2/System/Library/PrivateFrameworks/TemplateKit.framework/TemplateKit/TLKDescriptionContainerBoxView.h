@class TLKTextView;

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView

@property (retain, nonatomic) TLKTextView *viewForFirstAndLastBaseline;

- (id)calculateViewForFirstBaselineLayout;
- (void).cxx_destruct;
- (id)calculateViewForLastBaselineLayout;

@end
