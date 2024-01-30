@class NSString, NSArray, NSURL, NSDate;

@interface NTKCalendarEntryModel : NTKTimelineEntryModel

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *eventStartDate;
@property (retain, nonatomic) NSDate *eventEndDate;
@property (copy, nonatomic) NSString *primaryEventTitle;
@property (copy, nonatomic) NSString *primaryEventLocation;
@property (copy, nonatomic) NSString *secondaryEventTitle;
@property (copy, nonatomic) NSString *primaryEventOrganizerName;
@property (nonatomic) BOOL displayAsTomorrow;
@property (nonatomic) BOOL displayAsConflicting;
@property (nonatomic) BOOL displayAsFirstInDay;
@property (nonatomic) unsigned long long overlappingEventCount;
@property (nonatomic) BOOL overlappingDates;
@property (nonatomic) unsigned long long eventsInDayCount;
@property (retain, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSArray *eventColors;
@property (nonatomic) BOOL displayEntryDateInGraphicCircularView;

+ (id)sampleEventTemplateForFamily:(long long)a0;
+ (id)lockedEntryForFamily:(long long)a0;
+ (id)loadingEntryForFamily:(long long)a0;
+ (id)largeModular:(id)a0;
+ (id)smallModular:(id)a0;
+ (id)largeUtility:(id)a0;
+ (id)smallUtility:(id)a0;
+ (id)circular:(id)a0 isMedium:(BOOL)a1;
+ (id)extraLarge:(id)a0;
+ (id)signatureBezel:(id)a0;
+ (id)signatureCircular:(id)a0;
+ (id)signatureCorner:(id)a0;
+ (id)signatureRectangular:(id)a0;
+ (id)contentForLargeModular:(id)a0;
+ (id)_swapPlaceholderString:(id)a0 withTimeStringForDate:(id)a1 inString:(id)a2 usingBaseFont:(id)a3 smallCapsBaseFont:(id)a4 timeZone:(id)a5 options:(unsigned long long)a6;
+ (id)_modularSmallConflictImageProvider;
+ (id)_modularSmallCalendarImageProvider;
+ (id)_extraLargeConflictImageProvider;
+ (id)_extraLargeCalendarImageProvider;
+ (id)_signatureCornerImageProvider;
+ (id)contentForSignatureRectangular:(id)a0;
+ (id)wrappedUserStringFrom:(id)a0;
+ (id)_utilityCalendarImageProvider;
+ (id)_entryForTemplateDescription:(id)a0 family:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_wrappedPrimaryEventTitle;
- (id)_wrappedPrimaryEventLocation;
- (id)_wrappedPrimaryEventOrganizerName;
- (id)_wrappedSecondaryEventTitle;

@end
