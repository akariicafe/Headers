@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>

@property (retain, nonatomic) AMSURLRequestProperties *properties;

+ (id)logableDescriptionForRequest:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (id)initWithRequest:(id)a0 properties:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
