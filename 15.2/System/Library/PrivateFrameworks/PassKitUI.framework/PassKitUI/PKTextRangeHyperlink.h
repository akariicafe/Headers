@class NSString;

@interface PKTextRangeHyperlink : NSObject

@property (readonly, copy, nonatomic) NSString *linkText;
@property (readonly, copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLinkText:(id)a0 action:(id /* block */)a1;

@end
