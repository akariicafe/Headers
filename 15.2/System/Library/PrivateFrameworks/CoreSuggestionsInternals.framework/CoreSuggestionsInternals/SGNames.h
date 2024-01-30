@interface SGNames : NSObject

+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 8; unsigned int x5 : 20; })namePayload:(id)a0;
+ (BOOL)isCommonNameWord:(id)a0;
+ (BOOL)isSalientName:(id)a0;
+ (BOOL)isFamilyName:(id)a0;
+ (BOOL)isSalientNameByChars:(id)a0;
+ (unsigned int)attributesForNameWord:(id)a0;
+ (BOOL)isLowercaseStringCommonNameWord:(id)a0;
+ (BOOL)isProbablyShortCJKName:(id)a0;
+ (BOOL)isCommonVietnameseSurname:(id)a0;
+ (BOOL)isDifficultName:(id)a0;
+ (BOOL)isCapitalized:(id)a0;
+ (id)stripHonorifics:(id)a0;
+ (id)stripAndReturnHonorifics:(id)a0;
+ (id)universalCleanName:(id)a0;
+ (id)cleanName:(id)a0;
+ (id)handleLastNameFirstOrder:(id)a0;
+ (double)nameSimilarity:(id)a0 and:(id)a1;
+ (double)unnormalizedNameSimilarity:(id)a0 and:(id)a1;
+ (BOOL)namesApproximatelyMatch:(id)a0 and:(id)a1;
+ (BOOL)namesApproximatelyMatch:(id)a0 and:(id)a1 threshold:(double)a2;
+ (BOOL)unnormalizedNamesApproximatelyMatch:(id)a0 and:(id)a1;
+ (BOOL)unnormalizedNamesApproximatelyMatch:(id)a0 and:(id)a1 threshold:(double)a2;
+ (id)nameFromEmail:(id)a0;
+ (id)sketchesForName:(id)a0;
+ (id)surnameFromName:(id)a0;
+ (id)bestName:(id)a0;
+ (id)sgNameFromString:(id)a0 origin:(id)a1 recordId:(id)a2 extractionInfo:(id)a3;
+ (id)possibleNameStringFromEmailAddress:(id)a0;
+ (id)nameStringFromEmailAddress:(id)a0;
+ (id)cjkSpacerCharacters;
+ (id)cjkSpacersToWhiteSpace:(id)a0;
+ (BOOL)shouldInvertOrderOfFirst:(id)a0 last:(id)a1;

@end
