@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject

@property (nonatomic, setter=_setEndRange:) struct _NSRange { unsigned long long location; unsigned long long length; } _endRange;
@property (retain, nonatomic) IKArray *prelude;
@property (retain, nonatomic) IKCSSParseBlock *block;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
