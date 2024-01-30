@class NSArray, NSNumber;

@interface WFMatchTextGetGroupIntent : INIntent

@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSNumber *groupIndex;

@end
