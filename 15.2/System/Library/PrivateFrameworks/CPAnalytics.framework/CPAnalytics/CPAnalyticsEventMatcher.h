@class NSString, NSDictionary, NSArray;

@interface CPAnalyticsEventMatcher : NSObject

@property (readonly, nonatomic) NSString *eventKeyToMatch;
@property (readonly, nonatomic) NSDictionary *eventPropertiesToMatch;
@property (readonly, nonatomic) NSArray *conditionalChecks;

+ (id)eventMatcherWithConfiguration:(id)a0;
+ (id)eventMatcherWithEventName:(id)a0;
+ (id)eventMatcherWithEventName:(id)a0 properties:(id)a1;

- (BOOL)doesMatch:(id)a0;
- (id)_validateAndParseEventProperties:(id)a0;
- (id)_validateAndParseEventKey:(id)a0;
- (void).cxx_destruct;
- (id)_validateAndParseConditionalChecks:(id)a0;
- (id)initWithConfig:(id)a0;

@end
