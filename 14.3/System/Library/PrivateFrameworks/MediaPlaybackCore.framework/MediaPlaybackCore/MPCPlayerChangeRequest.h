@class NSArray;

@interface MPCPlayerChangeRequest : NSObject

@property (retain, nonatomic) NSArray *commands;
@property (nonatomic) unsigned long long options;

+ (void)performRequest:(id)a0 completion:(id /* block */)a1;
+ (void)performRequest:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)requestWithCommandRequests:(id)a0;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCommandRequests:(id)a0;

@end
