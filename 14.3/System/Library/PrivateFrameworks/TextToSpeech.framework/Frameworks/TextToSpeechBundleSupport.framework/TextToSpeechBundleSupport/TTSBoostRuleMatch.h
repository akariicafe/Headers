@class NSString, NSArray;

@interface TTSBoostRuleMatch : NSObject

@property (retain, nonatomic) NSString *rule;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) long long boostRuleIndex;
@property (retain, nonatomic) NSArray *groupings;

- (void).cxx_destruct;
- (id)description;

@end
