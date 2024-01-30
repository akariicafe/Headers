@interface PPConnectionsUtils : NSObject

+ (id)calendarUserActivityExternalIDKey;
+ (id)calendarUserActivityIdentifier;
+ (BOOL)isClientAuthorizedForSemanticTriggers:(id)a0;
+ (BOOL)isValidLinguisticQuery:(id)a0;
+ (unsigned char)locationFieldFromSemanticTag:(unsigned char)a0;
+ (BOOL)shouldAggregateLabel:(id)a0 withValue:(id)a1 query:(id)a2;
+ (id)supportedLocationSemanticTypes;
+ (id)triggerTypeFromQuery:(id)a0;

@end
