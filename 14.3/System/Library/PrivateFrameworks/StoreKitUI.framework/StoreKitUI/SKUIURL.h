@class NSString, NSDictionary, NSURL, NSMutableDictionary;

@interface SKUIURL : NSObject <NSCopying> {
    NSMutableDictionary *_queryDictionary;
}

@property (readonly, nonatomic) NSURL *underlyingURL;
@property (readonly, nonatomic) NSString *actionString;
@property (readonly, copy, nonatomic) NSDictionary *queryStringDictionary;
@property (readonly, nonatomic) NSString *redeemCode;
@property (readonly, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic) NSString *URLBagKey;
@property (copy, nonatomic) NSString *referrerApplicationName;
@property (copy, nonatomic) NSString *referrerURLString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0;
- (id)description;
- (id)_queryDictionary;
- (BOOL)isEqual:(id)a0;
- (id)newURLRequest;
- (id)valueForQueryParameter:(id)a0;
- (id)newURLRequestWithBaseURL:(id)a0;
- (id)initWithURLBagKey:(id)a0;
- (id)_decodedQueryParameter:(id)a0;
- (id)_searchGroupForSearchKind:(id)a0;
- (id)_searchURLBagKey;
- (id)_appStoreSearchURLBagKey;
- (id)initWithURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;

@end
