@class NSString, NSNumber;

@interface WFMatchTextIntent : INIntent

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSNumber *caseSensitive;

@end
