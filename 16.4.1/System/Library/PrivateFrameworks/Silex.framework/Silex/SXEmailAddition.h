@class NSString;

@interface SXEmailAddition : SXAddition

@property (readonly, nonatomic) NSString *to;
@property (readonly, nonatomic) NSString *subject;

- (id)action;

@end
