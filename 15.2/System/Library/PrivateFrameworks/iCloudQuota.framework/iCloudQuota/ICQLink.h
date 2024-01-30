@class NSString, NSDictionary, NSURL;

@interface ICQLink : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSURL *remoteUIURL;

+ (id)linkWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
+ (void)startDataTaskWithRequest:(id)a0;
+ (void)performHTTPGETCallWithParams:(id)a0 options:(long long)a1;
+ (id)urlRequestWithParams:(id)a0 options:(long long)a1;
+ (id)linkWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
+ (void)addHeadersToRequest:(id)a0;
+ (void)addPOSTParams:(id)a0 toRequest:(id)a1;
+ (void)performHTTPPOSTCallWithParams:(id)a0 options:(long long)a1;
+ (BOOL)performAction:(long long)a0 parameters:(id)a1 options:(long long)a2;
+ (id)urlSession;

- (id)initWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
- (BOOL)performActionWithOptions:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)performAction;
- (id)initWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
- (id)debugDescription;

@end
