@class NSMutableDictionary, NSArray, NSString, UIView, NSMutableArray;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIButtonItemProvider : NSObject <NUIContainerViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *viewTypeToButtonList;
@property (retain, nonatomic) NSMutableArray *visibleButtonItems;
@property (retain, nonatomic) UIView *fillerView;
@property (readonly) NSArray *buttonItemViews;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)commandButtons:(id)a0 iterator:(id /* block */)a1;

- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (BOOL)containerView:(id)a0 shouldRestartMeasurementDueToCompressionInAxis:(long long)a1 forReason:(long long)a2;
- (id)initWithRowModel:(id)a0 itemProvider:(id)a1 feedbackDelegate:(id)a2;
- (void)makeButtonsCompact;

@end
