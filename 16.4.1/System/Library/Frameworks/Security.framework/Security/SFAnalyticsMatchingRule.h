@class NSString, NSDictionary, NSDate, SECSFARule;

@interface SFAnalyticsMatchingRule : NSObject

@property (retain) SECSFARule *rule;
@property (retain) NSDate *lastMatch;
@property (retain) NSDictionary *matchingDictionary;
@property (retain) NSString *eventName;

- (void).cxx_destruct;
- (unsigned int)doAction:(id)a0 logger:(id)a1;
- (id)initWithSFARule:(id)a0 logger:(id)a1;
- (BOOL)isSubsetMatch:(id)a0 target:(id)a1;
- (id)lastMatchTimeKey;
- (BOOL)matchAttributes:(id)a0 logger:(id)a1;
- (BOOL)shouldRatelimit:(id)a0;
- (BOOL)valueMatch:(id)a0 target:(id)a1;

@end
