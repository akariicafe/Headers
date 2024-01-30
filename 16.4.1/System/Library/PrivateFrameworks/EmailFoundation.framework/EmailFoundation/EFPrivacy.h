@interface EFPrivacy : NSObject

+ (id)fullyRedactedStringForString:(id)a0;
+ (id)partiallyRedactedStringForString:(id)a0;
+ (long long)weeksSinceDate:(id)a0;
+ (unsigned int)bucketMessageCount:(unsigned long long)a0;
+ (long long)bucketedMessageAgeSinceDate:(id)a0 leadingDigits:(long long)a1;
+ (long long)bucketedNumber:(int)a0 leadingDigits:(long long)a1;
+ (id)dateByRemovingTimeComponentsFromDate:(id)a0;
+ (id)partiallyRedactedDictionary:(id)a0;
+ (id)partiallyRedactedStringForString:(id)a0 maximumUnredactedLength:(unsigned long long)a1;
+ (id)partiallyRedactedStringFromArray:(id)a0;

@end
