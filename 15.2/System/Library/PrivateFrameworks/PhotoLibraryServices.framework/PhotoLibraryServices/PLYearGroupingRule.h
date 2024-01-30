@class NSString, NSCalendar;

@interface PLYearGroupingRule : NSObject <PLHighlightItemClustererRule>

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)highlightItemList:(id)a0 canBeMergedWithOtherHighlightItemList:(id)a1;
- (void)titlesForHighlightItemList:(id)a0 dateRangeTitleGenerator:(id)a1 resultBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)titlesForHighlightItemList:(id)a0 dateRangeTitleGenerator:(id)a1 forceUpdateLocale:(BOOL)a2 resultBlock:(id /* block */)a3;
- (id)init;
- (BOOL)highlightItem:(id)a0 belongsToHighlightItemList:(id)a1;
- (unsigned long long)dominantYearForStartDate:(id)a0 endDate:(id)a1;

@end
