@interface CNAutocompleteEntitlementVerifier : NSObject

+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasCalendarEntitlement;
+ (BOOL)currentProcessHasContactsEntitlement;
+ (BOOL)currentProcessHasDuetEntitlement;
+ (BOOL)currentProcessHasNetworkClientEntitlement;
+ (BOOL)currentProcessHasRecentsEntitlement;
+ (BOOL)currentProcessHasStewieEntitlement;
+ (BOOL)currentProcessHasSuggestionsEntitlement;

@end
