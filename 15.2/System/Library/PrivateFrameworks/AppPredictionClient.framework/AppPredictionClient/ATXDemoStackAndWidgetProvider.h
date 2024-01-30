@interface ATXDemoStackAndWidgetProvider : NSObject

+ (BOOL)_shouldShowStackInGallery;
+ (BOOL)isDemoModeEnabled;
+ (void)startYourEngines;
+ (id)demoStackAndWidgets;
+ (id)_widgetArrayForPrefixKey:(id)a0 countKey:(id)a1 defaults:(id)a2 descriptors:(id)a3;
+ (id)_widgetFromDictionary:(id)a0 descriptors:(id)a1;

@end
