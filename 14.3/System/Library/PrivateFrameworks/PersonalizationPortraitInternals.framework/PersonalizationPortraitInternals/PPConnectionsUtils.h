@interface PPConnectionsUtils : NSObject

+ (id)supportedLocationSemanticTypes;
+ (BOOL)isClientAuthorizedForSemanticTriggers:(id)a0;
+ (BOOL)isValidLinguisticQuery:(id)a0;
+ (BOOL)shouldAggregateLabel:(id)a0 withValue:(id)a1 query:(id)a2;
+ (id)triggerTypeFromQuery:(id)a0;
+ (unsigned char)locationFieldFromSemanticTag:(unsigned char)a0;
+ (id)calendarUserActivityIdentifier;
+ (id)calendarUserActivityExternalIDKey;

@end
