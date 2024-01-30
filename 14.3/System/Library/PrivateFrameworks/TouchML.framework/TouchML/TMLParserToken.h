@class NSString;

@interface TMLParserToken : NSObject

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)description;
- (id)initWithToken:(unsigned long long)a0 text:(id)a1;

@end
