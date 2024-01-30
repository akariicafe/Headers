@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>

@property (retain, nonatomic) AMSURLRequestProperties *properties;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
