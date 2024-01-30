@class CNAutocompleteResultFactory, CLSDataStore, NSMutableArray;

@interface CNAClassKitResultTransformVisitor : NSObject {
    NSMutableArray *_results;
}

@property (readonly, nonatomic) CNAutocompleteResultFactory *factory;
@property (readonly, nonatomic) CLSDataStore *dataStore;
@property (readonly, nonatomic) unsigned long long searchType;

+ (id)addressForPerson:(id)a0 searchType:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithFactory:(id)a0 dataStore:(id)a1 searchType:(unsigned long long)a2;
- (id)reduceCollection:(id)a0;
- (void)visitPerson:(id)a0;
- (void)visitClass:(id)a0;

@end
