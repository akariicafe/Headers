@class NSString, MUHoursSummaryView, MUStackView, NSArray, MUBusinessHoursConfiguration;
@protocol MUExpandableHoursViewDelegate;

@interface MUExpandableHoursView : MUPlaceSectionRowView <MUStackable> {
    MUStackView *_contentStackView;
    MUHoursSummaryView *_hoursSummaryView;
    NSArray *_dayRowViews;
    MUBusinessHoursConfiguration *_config;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<MUExpandableHoursViewDelegate> delegate;
@property (nonatomic, getter=isStacked) BOOL stacked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupStackView;
- (void)_buildContent;
- (BOOL)shouldStackForProposedWidth:(double)a0;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateHoursVisibilityAnimated:(BOOL)a0;
- (void)_invokeChildrenOfStackingChange;
- (id)initWithBusinessHoursConfiguration:(id)a0;

@end
