@class SSURLBag, AMSBagValue, NSString;

@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract>

@property (retain, nonatomic) SSURLBag *bag;
@property (readonly, nonatomic) AMSBagValue *commerceUIURLPatterns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContract;

- (id)init;
- (void).cxx_destruct;

@end
