@class NSArray, NSString;

@interface WFSplitTextIntent : INIntent

@property (copy, nonatomic) NSArray *text;
@property (nonatomic) long long separator;
@property (copy, nonatomic) NSString *customSeparator;

@end
