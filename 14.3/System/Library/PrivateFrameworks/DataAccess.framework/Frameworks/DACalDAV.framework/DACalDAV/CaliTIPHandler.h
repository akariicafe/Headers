@interface CaliTIPHandler : NSObject

+ (void)initialize;
+ (void)processMessage:(id)a0 inCalendar:(id)a1;
+ (BOOL)logiTIPDetail;
+ (void)setLogiTIPDetail:(BOOL)a0;
+ (void)processMessages:(id)a0 inCalendar:(id)a1;
+ (BOOL)diffsAreImportant:(id)a0;
+ (id)debugStringForEvent:(id)a0;
+ (BOOL)isAddressMe:(id)a0 forAccount:(id)a1;
+ (BOOL)myStatusNeedsActionForEvent:(id)a0 withAccount:(id)a1;
+ (id)_calculateDiffsForEvent:(id)a0 inMessage:(id)a1;
+ (id)getOccurrenceChange:(id)a0 forEvent:(id)a1 inCalendar:(id)a2;
+ (BOOL)doScheduleChanges:(id)a0 applyToEvent:(id)a1 inCalendar:(id)a2;
+ (id)myAddressInAccount:(id)a0 forEvent:(id)a1;

@end
