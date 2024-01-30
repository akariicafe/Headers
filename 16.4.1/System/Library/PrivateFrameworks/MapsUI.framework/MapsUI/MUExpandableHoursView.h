@class NSString, MUStackView, MUHoursSummaryView, NSArray, MUBusinessHoursConfiguration, MUStackLayout;
@protocol MUExpandableHoursViewDelegate;

@interface MUExpandableHoursView : MUPlaceSectionRowView <MUStackable> {
    MUStackView *_contentStackView;
    MUHoursSummaryView *_hoursSummaryView;
    NSArray *_dayRowViews;
    MUStackLayout *_summaryAndHoursStackLayout;
    MUBusinessHoursConfiguration *_config;
    NSArray *_dayRowViewModels;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<MUExpandableHoursViewDelegate> delegate;
@property (readonly, nonatomic) MUBusinessHoursConfiguration *hoursConfiguration;
@property (nonatomic, getter=isStacked) BOOL stacked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_invokeChildrenOfStackingChange;
- (void)_setupStackView;
- (void)_updateHoursVisibilityAnimated:(BOOL)a0;
- (void)_addDayRowViewsToStackViewIfNeeded;
- (void)_buildDayRowViewModels;
- (void)_createDayRowViewsIfNeeded;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithBusinessHoursConfiguration:(id)a0;
- (BOOL)shouldStackForProposedWidth:(double)a0;

@end
