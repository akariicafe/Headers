@class NSString, UIColor;

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved;
@property (getter=isDistanceResolved) BOOL distanceResolved;
@property (retain) NSString *hoursString;
@property (retain) UIColor *hoursColor;

- (void).cxx_destruct;
- (BOOL)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:(id)a0 lines:(id)a1;
- (void)resolveDistanceNotFound;
- (void)resolveDistanceString:(id)a0 lines:(id)a1;
- (void)updateFormattedTextForLines:(id)a0;

@end
