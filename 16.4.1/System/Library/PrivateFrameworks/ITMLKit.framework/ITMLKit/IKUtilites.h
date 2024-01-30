@interface IKUtilites : NSObject

+ (BOOL)isAppleTV;
+ (BOOL)runningAnInternalBuild;
+ (id)_entriesBySectionIndexForArrayOfStringEntries:(id)a0 currentCollation:(id)a1;
+ (id)_arrayByAddingValuesFromArrayOfDictionaries:(id)a0;
+ (BOOL)isAppTrusted;
+ (id)sort:(id)a0 options:(id)a1;

@end
