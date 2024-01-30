@interface ATXDemoStackAndWidgetProvider : NSObject

+ (void)startYourEngines;
+ (id)_widgetArrayForPrefixKey:(id)a0 countKey:(id)a1 defaults:(id)a2 descriptors:(id)a3;
+ (BOOL)isDemoModeEnabled;
+ (id)demoStackAndWidgets;
+ (BOOL)_shouldShowStackInGallery;
+ (id)_widgetFromDictionary:(id)a0 descriptors:(id)a1;

@end
