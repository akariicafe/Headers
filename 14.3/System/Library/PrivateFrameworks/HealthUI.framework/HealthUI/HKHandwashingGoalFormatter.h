@class HKUnitPreferenceController, HKDisplayType, NSString;

@interface HKHandwashingGoalFormatter : NSObject <HKNumberFormatter>

@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
