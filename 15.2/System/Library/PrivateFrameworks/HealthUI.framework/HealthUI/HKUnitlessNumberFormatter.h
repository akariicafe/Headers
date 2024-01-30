@class HKUnitPreferenceController, HKDisplayType, NSString;

@interface HKUnitlessNumberFormatter : NSObject <HKNumberFormatter>

@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
