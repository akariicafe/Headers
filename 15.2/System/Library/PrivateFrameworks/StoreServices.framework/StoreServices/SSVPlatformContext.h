@class NSDictionary, NSString, NSArray;
@protocol SSVSAPContext;

@interface SSVPlatformContext : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *bagDictionary;
@property (readonly, nonatomic) NSString *lookupURLString;
@property (readonly, nonatomic) NSString *unpersonalizedLookupURLString;
@property (readonly, nonatomic) NSArray *signedHeaders;
@property (readonly, nonatomic) NSArray *signedQueryParameters;
@property (retain, nonatomic) id<SSVSAPContext> SAPContext;

- (id)initWithLookupURL:(id)a0 unpersonalizedLookupURL:(id)a1 signedHeaders:(id)a2 signedQueryParameters:(id)a3;
- (id)initWithBagDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
