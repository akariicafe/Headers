@class NSDictionary, TBTileFetchRequestDescriptor, NSString;

@interface TBTileFetchRequest : NSObject <TBFetchRequest, NSCopying>

@property (retain, nonatomic) TBTileFetchRequestDescriptor *descriptor;
@property (nonatomic) BOOL cacheable;
@property (nonatomic) unsigned long long sourcePolicy;
@property (copy, nonatomic) id /* block */ resultsHandler;
@property (copy, nonatomic) id /* block */ preferLocalHandler;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestWithDescriptor:(id)a0 sourcePolicy:(unsigned long long)a1 cacheable:(BOOL)a2;

- (void)handlePreferLocalResponse:(id)a0;
- (void)handleResponse:(id)a0;
- (id)initWithDescriptor:(id)a0 sourcePolicy:(unsigned long long)a1 cacheable:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)doesLocalResultsSatisfyRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
