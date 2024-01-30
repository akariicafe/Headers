@class NSString, CLLocation, NSDate;

@interface NWCSunriseComplicationTimelineEntryModel : NWCComplicationTimelineEntryModel

@property (readonly, nonatomic) BOOL isNormalUpcomingEvent;
@property (readonly, nonatomic) BOOL isConstantSunEvent;
@property (readonly, nonatomic) BOOL isSunriseEvent;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) long long constantSun;
@property (readonly, nonatomic, getter=isCurrentEvent) BOOL currentEvent;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSString *animationGroup;

+ (id)currentEventEntryModelWithEntryAndEventDate:(id)a0 atLocation:(id)a1 withDisplayName:(id)a2 constantSun:(long long)a3 animationGroup:(id)a4;
+ (id)entryModelWithEntryDate:(id)a0 eventDate:(id)a1 atLocation:(id)a2 withDisplayName:(id)a3 constantSun:(long long)a4 animationGroup:(id)a5;
+ (id)placeholderEntryModelWithEntryDate:(id)a0 animationGroup:(id)a1;
+ (id)_attributedDisplayNameWithLocationGlyph:(id)a0 inFont:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_extraLargeTemplate;
- (id)initWithEntryDate:(id)a0 eventDate:(id)a1 atLocation:(id)a2 withDisplayName:(id)a3 constantSun:(long long)a4 currentEvent:(BOOL)a5 animationGroup:(id)a6;
- (id)_largeUtilityTemplateSuppressCountdown:(BOOL)a0;
- (id)_circularTemplateIsMedium:(BOOL)a0;
- (id)_largeModularTemplate;
- (id)_smallModularTemplate;
- (id)_smallUtilityTemplate;
- (id)_graphicCornerTemplate;
- (id)_graphicRectangularTemplate;
- (id)_swapPlaceholderString:(id)a0 withTimeStringForDate:(id)a1 inString:(id)a2 usingBaseFont:(id)a3 smallCapsBaseFont:(id)a4;
- (id)_eventTimeAndCountdownAbbreviated:(BOOL)a0 suppressCountdown:(BOOL)a1 suppressCommaSeparator:(BOOL)a2;

@end
