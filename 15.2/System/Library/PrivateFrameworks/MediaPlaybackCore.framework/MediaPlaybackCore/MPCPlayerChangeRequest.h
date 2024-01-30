@class NSArray;

@interface MPCPlayerChangeRequest : NSObject

@property (retain, nonatomic) NSArray *commands;
@property (nonatomic) unsigned long long options;

+ (void)performRequest:(id)a0 completion:(id /* block */)a1;
+ (void)performRequest:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)performRequest:(id)a0 extendedStatusCompletion:(id /* block */)a1;
+ (void)performRequest:(id)a0 options:(unsigned long long)a1 extendedStatusCompletion:(id /* block */)a2;
+ (id)requestWithCommandRequests:(id)a0;

- (void)performWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCommandRequests:(id)a0;
- (void)performWithExtendedStatusCompletion:(id /* block */)a0;

@end
