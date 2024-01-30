@class NSError, NSString, NSDictionary, NSHTTPURLResponse, NSMutableData, PocketAPI, NSURLConnection;
@protocol PocketAPIDelegate;

@interface PocketAPIOperation : NSOperation <NSURLConnectionDelegate, NSCopying, PocketAPIDelegate> {
    NSString *baseURLPath;
    BOOL finishedLoading;
    BOOL attemptedRelogin;
}

@property (retain, nonatomic) PocketAPI *API;
@property (retain, nonatomic) id<PocketAPIDelegate> delegate;
@property (readonly, retain, nonatomic) NSString *baseURLPath;
@property (nonatomic) int domain;
@property (nonatomic) int HTTPMethod;
@property (retain, nonatomic) NSString *APIMethod;
@property (retain, nonatomic) NSDictionary *arguments;
@property (readonly, retain, nonatomic) NSURLConnection *connection;
@property (readonly, retain, nonatomic) NSHTTPURLResponse *response;
@property (readonly, retain, nonatomic) NSMutableData *data;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encodeForURL:(id)a0;
+ (id)decodeForURL:(id)a0;
+ (id)errorFromXError:(id)a0 withErrorCode:(unsigned long long)a1 HTTPStatusCode:(unsigned long long)a2;

- (id)responseDictionary;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)start;
- (BOOL)isConcurrent;
- (void)pocketAPILoggedIn:(id)a0;
- (void)pocketAPI:(id)a0 hadLoginError:(id)a1;
- (void)connectionFinishedWithError:(id)a0;
- (id)pkt_requestArguments;
- (id)pkt_URLRequest;
- (void)pkt_connectionFinishedLoading;

@end
