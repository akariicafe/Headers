@interface CKAddressBook : NSObject

+ (id)contactImageCache;
+ (id)contactImageOfDiameter:(double)a0 forID:(id)a1 monogramStyle:(long long)a2 tintMonogramText:(BOOL)a3;
+ (id)contactImageOfDiameter:(double)a0 forID:(id)a1 monogramStyle:(long long)a2 tintMonogramText:(BOOL)a3 customFont:(id)a4;
+ (void)flushMonogrammers;
+ (id)locationSharingContactImageOfDiameter:(double)a0 forID:(id)a1 useCustomFont:(BOOL)a2;
+ (id)monogrammerProvider;
+ (id)monogrammerWithDiameter:(double)a0 style:(long long)a1 useAppTintColor:(BOOL)a2 customFont:(id)a3;
+ (id)placeholderContactImageOfDiameter:(double)a0 monogramStyle:(long long)a1 tintMonogramText:(BOOL)a2;
+ (id)transcriptContactImageOfDiameter:(double)a0 forID:(id)a1;

@end
