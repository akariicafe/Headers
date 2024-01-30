@interface OKSettingsUtility : NSObject

+ (id)stringFromObject:(id)a0;
+ (id)normalizedObjectFromValue:(id)a0;
+ (id)valueForObject:(id)a0 ofType:(unsigned long long)a1 optionalSubType:(unsigned long long)a2 optionalClass:(Class)a3 optionalMapping:(id)a4 resolution:(id)a5;
+ (id)valueForKey:(id)a0 ofType:(unsigned long long)a1 settings:(id)a2 optionalSubType:(unsigned long long)a3 optionalClass:(Class)a4 optionalMapping:(id)a5 resolution:(id)a6;
+ (id)_settingObjectForKey:(id)a0 settings:(id)a1 resolution:(id)a2;
+ (id)numberFromObject:(id)a0;
+ (id)enumFromObject:(id)a0 mapping:(id)a1;
+ (id)optionsFromObject:(id)a0 mapping:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromObject:(id)a0;
+ (struct CGPoint { double x0; double x1; })pointFromObject:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeFromObject:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsFromObject:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })coordinateLocationFromObject:(id)a0;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionFromObject:(id)a0;
+ (struct UIOffset { double x0; double x1; })offsetFromObject:(id)a0;
+ (id)attributedStringFromObject:(id)a0;
+ (id)urlFromObject:(id)a0;
+ (id)colorFromObject:(id)a0;
+ (id)indexPath2DFromObject:(id)a0;
+ (id)widgetFromObject:(id)a0;
+ (id)settingsObjectFromObject:(id)a0 class:(Class)a1 resolution:(id)a2;
+ (id)dynamicSettingsObjectFromObject:(id)a0 class:(Class)a1 resolution:(id)a2;
+ (id)arrayFromObject:(id)a0 type:(unsigned long long)a1;
+ (id)arrayOfURLFromObject:(id)a0;
+ (id)arrayOfStringFromObject:(id)a0;
+ (id)arrayOfDictionaryFromObject:(id)a0;
+ (id)arrayOfWidgetFromObject:(id)a0;
+ (id)arrayOfSettingsObjectsFromObject:(id)a0 class:(Class)a1 resolution:(id)a2;
+ (id)arrayOfDynamicSettingsObjectsFromObject:(id)a0 class:(Class)a1 resolution:(id)a2;
+ (id)dictionaryFromObject:(id)a0 type:(unsigned long long)a1;
+ (id)dictionaryOfDictionaryFromObject:(id)a0;
+ (id)dictionaryOfArrayFromObject:(id)a0;
+ (id)dictionaryOfSettingsObjectsFromObject:(id)a0 class:(Class)a1 resolution:(id)a2;
+ (id)dictionaryOfDynamicSettingsObjectsFromObject:(id)a0 class:(Class)a1 resolution:(id)a2;

@end
