@interface _UIKitDragAndDropStatistics : NSObject

+ (void)incrementUIKitScalarValueForKnownInternalAppsForKey:(id)a0 bundleID:(id)a1;
+ (void)setUIKitScalarValue:(long long)a0 forKey:(id)a1;
+ (void)incrementUIKitScalarValueBy:(long long)a0 forKey:(id)a1;
+ (void)recordUIKitDragAndDropDistributionValue:(double)a0 forKey:(id)a1;

@end
