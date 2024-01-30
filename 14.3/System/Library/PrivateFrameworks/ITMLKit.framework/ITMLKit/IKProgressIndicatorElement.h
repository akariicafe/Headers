@class NSString;

@interface IKProgressIndicatorElement : IKViewElement

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long percentage;

+ (BOOL)shouldParseChildDOMElements;

@end
