@interface IKUtilites : NSObject

+ (BOOL)isAppleTV;
+ (BOOL)runningAnInternalBuild;
+ (BOOL)isAppTrusted;
+ (id)sort:(id)a0 options:(id)a1;
+ (id)_entriesBySectionIndexForArrayOfStringEntries:(id)a0 currentCollation:(id)a1;
+ (id)_arrayByAddingValuesFromArrayOfDictionaries:(id)a0;

@end
