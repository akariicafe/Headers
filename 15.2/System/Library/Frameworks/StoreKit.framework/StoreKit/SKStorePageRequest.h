@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject

@property (nonatomic) long long productPageStyle;
@property (copy, nonatomic) NSDictionary *productParameters;
@property (copy, nonatomic) NSURL *productURL;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;

@end
