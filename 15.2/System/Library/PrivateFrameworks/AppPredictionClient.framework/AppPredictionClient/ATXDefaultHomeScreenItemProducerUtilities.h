@interface ATXDefaultHomeScreenItemProducerUtilities : NSObject

+ (id)widgetDescriptorFromAvocadoDescriptor:(id)a0 appBundleId:(id)a1 rankType:(long long)a2;
+ (id)personalitiesFromAssetsWithKey:(id)a0;
+ (id)stackFromDefaultStackPersonalities:(id)a0 suggestedSize:(unsigned long long)a1 maxWidgetsPerStack:(unsigned long long)a2 personalityToDescriptorDictionary:(id)a3 isiPad:(BOOL)a4;
+ (id)splitDescriptorsIntoFirstPartyAndThirdParty:(id)a0;
+ (id)defaultWidgetStackFromSmallStack:(id)a0 mediumStack:(id)a1 largeStack:(id)a2 extraLargeStack:(id)a3 suggestedSize:(unsigned long long)a4 maxWidgetsPerStack:(unsigned long long)a5 isiPad:(BOOL)a6;
+ (id)widgets:(id)a0 filteredForSize:(unsigned long long)a1;
+ (id)widgetsFromPersonalities:(id)a0 size:(unsigned long long)a1 personalityToDescriptorDictionary:(id)a2;
+ (id)_defaultWidgetStackFromSmallStack:(id)a0 mediumStack:(id)a1 largeStack:(id)a2 extraLargeStack:(id)a3 suggestedSize:(unsigned long long)a4 maxWidgetsPerStack:(unsigned long long)a5 isiPad:(BOOL)a6;
+ (id)specialWidgetDescriptorForPersonality:(id)a0 size:(unsigned long long)a1;
+ (id)widget:(id)a0 filteredForSize:(unsigned long long)a1;
+ (id)widgetFromPersonality:(id)a0 size:(unsigned long long)a1 personalityToDescriptorDictionary:(id)a2;
+ (id)_specialAvocadoKindsConvertingFromAssetsString:(id)a0;
+ (unsigned long long)_widgetFamilyMaskForStackLayoutSize:(unsigned long long)a0;
+ (unsigned long long)_supportedSizeClassesForSpecialAvocadoKind:(id)a0;
+ (BOOL)_isSpecialAvocadoDescriptor:(id)a0;

@end
