@interface BKLocalization : NSObject

+ (BOOL)isiPad;
+ (id)getLocalizedString:(id)a0;
+ (id)getLocalizedString:(id)a0 withBundle:(id)a1 defaultValue:(id)a2;
+ (id)getStringFromBundleLocalizationTable:(id)a0 withBundle:(id)a1 inLocalization:(id)a2 fromTable:(id)a3;

@end
