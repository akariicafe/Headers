@class NSArray, NSString;

@interface WFCombineTextIntent : INIntent

@property (copy, nonatomic) NSArray *text;
@property (nonatomic) long long separator;
@property (copy, nonatomic) NSString *customSeparator;

@end
