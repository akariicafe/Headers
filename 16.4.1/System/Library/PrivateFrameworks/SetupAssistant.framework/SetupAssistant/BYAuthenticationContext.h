@class NSString, LAContext;

@interface BYAuthenticationContext : NSObject <LAUIDelegate>

@property (retain, nonatomic) NSString *secret;
@property (retain, nonatomic) LAContext *underlyingContext;

+ (void)createContextWithSecret:(id)a0 policy:(long long)a1 options:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (id)initWithSecret:(id)a0;

@end
