@class NSString;

@interface NMAPISearchRequest : NMAPIRequest

@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long resultsPerSection;

- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;

@end
