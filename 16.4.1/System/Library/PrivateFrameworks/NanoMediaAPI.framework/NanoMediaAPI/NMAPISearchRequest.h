@class NSString;

@interface NMAPISearchRequest : NMAPIRequest

@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long resultsPerSection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
