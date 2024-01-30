@interface BKLocalization : NSObject

+ (BOOL)isiPad;
+ (id)getLocalizedString:(id)a0;
+ (id)getLocalizedString:(id)a0 fromFile:(id)a1;
+ (id)getLocalizedString:(id)a0 fromStringTable:(id)a1 withBundle:(id)a2 defaultValue:(id)a3;

@end
