@protocol CNUINavigationListStyle;

@interface CNUINavigationListStyleApplier : NSObject

@property (readonly, nonatomic) id<CNUINavigationListStyle> navigationListStyle;

- (id)initWithNavigationListStyle:(id)a0;
- (void)applyNavigationListStyleToCell:(id)a0;
- (void)applyNavigationListStyleToDetailCell:(id)a0;
- (void)applyExpandedBackgroundNavigationListStyleToCell:(id)a0;
- (void)applyCollapsedBackgroundNavigationListStyleToCell:(id)a0;
- (void).cxx_destruct;

@end
