@class IKArray;

@interface IKCSSParseObject : NSObject

@property (retain, nonatomic) IKArray *cssValue;
@property (nonatomic) long long type;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)stringifyList:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
