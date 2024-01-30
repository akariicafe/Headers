@class NSString, NSNumber;

@interface WFTextMatch : INObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSNumber *caseSensitive;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSNumber *index;

@end
