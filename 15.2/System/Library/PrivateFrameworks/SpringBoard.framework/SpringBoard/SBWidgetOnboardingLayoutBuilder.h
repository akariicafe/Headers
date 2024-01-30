@class NSArray;

@interface SBWidgetOnboardingLayoutBuilder : NSObject

@property (readonly, nonatomic) NSArray *pinnedWidgets;
@property (readonly, nonatomic) NSArray *suggestionWidgets;

- (void).cxx_destruct;
- (id)initWithPinnedWidgets:(id)a0 suggestionWidgets:(id)a1;
- (id)migratedDefaultWidgets:(BOOL)a0;
- (id)defaultCalendarWidgetIcon:(unsigned long long)a0;
- (id)defaultFirstSuggestionWidgetIcon:(unsigned long long)a0;
- (id)defaultSecondSuggestionWidgetIcon:(unsigned long long)a0;
- (id)defaultSmallClockWidgetIcon;
- (id)defaultSmallCalendarWidgetIcon;
- (BOOL)isCalendarWidget:(id)a0;
- (id)defaultMediumFirstSuggestionWidgetIcon;
- (id)defaultMediumSecondSuggestionWidgetIcon;
- (BOOL)isCalendarWidgetIcon:(id)a0;
- (BOOL)isFirstSuggestionActiveWidgetIcon:(id)a0;
- (BOOL)isSecondSuggestionActiveWidgetIcon:(id)a0;
- (id)defaultSmallNotesWidgetIcon;
- (id)defaultMediumCalendarWidgetIcon;
- (id)defaultLargeFirstSuggestionWidgetIcon;
- (id)defaultLargeSecondSuggestionWidgetIcon;
- (id)migratedOneLargeWidget:(id)a0;
- (id)migratedOneMediumWidget:(id)a0;
- (id)migratedOneSmallWidget:(id)a0;
- (id)migratedTwoSmallWidgets:(id)a0;
- (id)migratedTwoMediumWidgets:(id)a0;
- (id)migratedSmallAndMediumWidget:(id)a0;
- (id)migratedThreeWidgets:(id)a0;
- (id)migratedFourWidgets:(id)a0;
- (BOOL)isClockWidget:(id)a0;
- (id)deduplicateInsidePinnedWidgets;

@end
