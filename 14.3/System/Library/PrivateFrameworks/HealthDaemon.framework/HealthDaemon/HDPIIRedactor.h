@class NSRegularExpression, NSSet, NSDataDetector;

@interface HDPIIRedactor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDataDetector *dataDetectorAll;
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipLink;
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipPhoneNumbers;
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipLinkSkipPhoneNumbers;
@property (readonly, nonatomic) NSRegularExpression *fullWordRegex;
@property (readonly, nonatomic) NSRegularExpression *SSNRegex;
@property (readonly, nonatomic) NSRegularExpression *longNumberRegex;
@property (readonly, nonatomic) NSSet *names;

+ (id)_namesToRedactWithProfile:(id)a0 error:(id *)a1;
+ (id)_redactFullWordRegexWithError:(id *)a0;
+ (id)_SSNRegularExpressionWithError:(id *)a0;
+ (id)_longNumberRegexWithError:(id *)a0;
+ (id)_meContactNameKeys;
+ (void)_addNamesFromMeContact:(id)a0 toSet:(id)a1;
+ (void)_addName:(id)a0 toSet:(id)a1;
+ (void)_addNames:(id)a0 toSet:(id)a1;
+ (id)redactorWithProfile:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)redactedStringWithString:(id)a0 options:(unsigned long long)a1 redactedCount:(unsigned long long *)a2;
- (unsigned long long)_redactDataDetectorTypesFromString:(id)a0 options:(unsigned long long)a1;
- (unsigned long long)_redactNamesFromString:(id)a0;
- (unsigned long long)_redactSSNsFromString:(id)a0;
- (unsigned long long)_redactLongNumbersFromString:(id)a0;
- (id)redactedStringWithString:(id)a0;
- (id)redactedStringWithString:(id)a0 redactedCount:(unsigned long long *)a1;
- (id)redactedStringWithString:(id)a0 options:(unsigned long long)a1;

@end
