@class NSURL;

@interface NMAPIURLRequest : NMAPIRequest

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
