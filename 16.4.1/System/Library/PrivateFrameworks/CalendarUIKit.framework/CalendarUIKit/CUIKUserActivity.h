@class NSString, NSSet;

@interface CUIKUserActivity : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *activityTitle;
@property (retain, nonatomic) NSString *activitySubtitle;
@property (retain, nonatomic) NSSet *activityKeywords;

+ (BOOL)_boolFromDictionary:(id)a0 key:(id)a1 error:(BOOL *)a2;
+ (double)_doubleFromDictionary:(id)a0 key:(id)a1 error:(BOOL *)a2;
+ (long long)_integerFromDictionary:(id)a0 key:(id)a1 error:(BOOL *)a2;
+ (id)_stringFromDictionary:(id)a0 key:(id)a1 error:(BOOL *)a2;
+ (unsigned long long)_typeFromDictionary:(id)a0;
+ (unsigned long long)_unsignedIntegerFromDictionary:(id)a0 key:(id)a1 error:(BOOL *)a2;
+ (id)activityForActivity:(id)a0;
+ (id)activityForDictionary:(id)a0;

- (void)updateActivity:(id)a0;
- (id)dictionary;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
