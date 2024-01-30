@interface ACUILocalization : NSObject

+ (id)localizedTextForDataclasses:(id)a0 usedAtBeginningOfSentence:(BOOL)a1 forAccount:(id)a2;
+ (id)localizedTextForDataclasses:(id)a0 usedAtBeginningOfSentence:(BOOL)a1;
+ (id)localizedTitleForDataclass:(id)a0 forAccount:(id)a1;
+ (id)localizedStringForDataclass:(id)a0 withSuffix:(id)a1 forAccount:(id)a2;
+ (id)localizedTitleForDataclass:(id)a0;
+ (id)localizedReferenceToLocalSourceOfDataclass:(id)a0;
+ (id)localizedTitleForLocalSourceOfDataclass:(id)a0 usedAtBeginningOfSentence:(BOOL)a1;

@end
