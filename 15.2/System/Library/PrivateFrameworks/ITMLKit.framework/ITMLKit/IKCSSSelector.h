@class NSString;

@interface IKCSSSelector : NSObject

@property long long type;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *stringValue;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)description;
- (void).cxx_destruct;

@end
