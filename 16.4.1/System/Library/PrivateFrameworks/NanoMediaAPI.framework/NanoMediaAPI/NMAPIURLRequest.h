@class NSURL;

@interface NMAPIURLRequest : NMAPIRequest

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
