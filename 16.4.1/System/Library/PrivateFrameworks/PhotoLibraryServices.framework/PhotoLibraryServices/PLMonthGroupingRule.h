@class NSString, NSCalendar;

@interface PLMonthGroupingRule : NSObject <PLHighlightItemClustererRule, PLHighlightItemPromoterRule>

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)highlightItem:(id)a0 belongsToHighlightItemList:(id)a1;
- (id)highlightItemsSortedByImportance:(id)a0 withSharingConsideration:(long long)a1;
- (BOOL)highlightItemList:(id)a0 canBeMergedWithOtherHighlightItemList:(id)a1;
- (id)fallbackHighlightItemFromAllHighlightItems:(id)a0 withSharingConsideration:(long long)a1;
- (BOOL)highlightItemHasMinimumRequirementToBePromoted:(id)a0 withSharingConsideration:(long long)a1;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
- (void)titlesForHighlightItemList:(id)a0 dateRangeTitleGenerator:(id)a1 forceUpdateLocale:(BOOL)a2 resultBlock:(id /* block */)a3;
- (void)titlesForHighlightItemList:(id)a0 dateRangeTitleGenerator:(id)a1 resultBlock:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)dominantMonthDateComponentForStartDateComponents:(id)a0 endDateComponents:(id)a1 numberOfDaysInMonthOfStartDate:(long long)a2;

@end
