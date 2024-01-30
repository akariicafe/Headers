@class NSString, NSDictionary;

@interface IKCSSToken : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned short charValue;
@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSDictionary *properties;

- (id)initWithType:(long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
