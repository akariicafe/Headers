@class NSString;

@interface MapsSuggestionsResumeRouteTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETAChargeTitleFormatter>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)formatTitlesForEntry:(id)a0 eta:(id)a1 requiredChargeLevel:(id)a2 currentChargeLevel:(id)a3;

@end
