@protocol NSObject, NSCopying;

@interface BLSAlwaysOnTimeline : NSObject {
    id /* block */ _configureEntryBlock;
}

@property (readonly, nonatomic) id<NSObject, NSCopying> identifier;

+ (id)constructFrameSpecifiersForTimelines:(id)a0 dateInterval:(id)a1 shouldConstructStartSpecifier:(BOOL)a2 framesPerSecond:(double)a3 previousSpecifier:(id)a4;
+ (id)emptyTimelineWithIdentifier:(id)a0;
+ (id)timelineWithEntries:(id)a0 identifier:(id)a1 configure:(id /* block */)a2;
+ (id)everyMinuteTimelineWithIdentifier:(id)a0 configure:(id /* block */)a1;
+ (id)timelineWithPerMinuteUpdateFrequency:(long long)a0 identifier:(id)a1 configure:(id /* block */)a2;
+ (id)timelineWithUpdateInterval:(double)a0 startDate:(id)a1 identifier:(id)a2 configure:(id /* block */)a3;
+ (id)coalesceSpecifiers:(id)a0 forDateInterval:(id)a1 framesPerSecond:(double)a2 previousSpecifier:(id)a3;
+ (id)coalescedSpecifierFromEnumerator:(id)a0 forDateInterval:(id)a1 framesPerSecond:(double)a2 previousSpecifier:(id)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfEntries:(id)a0 forDateInterval:(id)a1 shouldIncludePrevious:(BOOL)a2;
+ (id)uncoalescedFrameSpecifiersForTimelines:(id)a0 dateInterval:(id)a1 shouldConstructStartSpecifier:(BOOL)a2 framesPerSecond:(double)a3 previousSpecifier:(id)a4;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 configure:(id /* block */)a1;
- (id)unconfiguredEntriesForDateInterval:(id)a0 previousEntry:(id)a1;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)a0 withPreviousEntry:(id)a1;
- (id)configureEntry:(id)a0 previousEntry:(id)a1;
- (id)configuredEntriesForDateInterval:(id)a0 previousEntry:(id)a1 shouldConstructStartEntry:(BOOL)a2;

@end
