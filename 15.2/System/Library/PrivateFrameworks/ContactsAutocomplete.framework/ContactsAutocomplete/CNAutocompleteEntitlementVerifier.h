@interface CNAutocompleteEntitlementVerifier : NSObject

+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasSuggestionsEntitlement;
+ (BOOL)currentProcessHasRecentsEntitlement;
+ (BOOL)currentProcessHasDuetEntitlement;
+ (BOOL)currentProcessHasContactsEntitlement;
+ (BOOL)currentProcessHasCalendarEntitlement;
+ (BOOL)currentProcessHasNetworkClientEntitlement;

@end
