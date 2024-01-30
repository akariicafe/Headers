@interface FMFMonogramUtility : NSObject

+ (id)contactImageCache;
+ (void)clearMonogramCache;
+ (id)contactStatusCache;
+ (struct __CFString { } *)hexStringFromColor:(id)a0;
+ (id)monogramImageOfDiameter:(double)a0 forContact:(id)a1 monogramStyle:(long long)a2 tintColor:(id)a3 customFont:(id)a4 isPersonImage:(BOOL *)a5;
+ (id)monogramImageOfDiameter:(double)a0 forContact:(id)a1 useTintColor:(id)a2 useCustomFont:(BOOL)a3 isPersonImage:(BOOL *)a4;
+ (id)monogrammerWithDiameter:(double)a0 style:(long long)a1 useTintColor:(id)a2 customFont:(id)a3;
+ (id)placeholderContactImageOfDiameter:(double)a0 monogramStyle:(long long)a1 useTintColor:(id)a2;

@end
