@class NSURLSession, NSString, NSURLSessionTask, NSMutableData, NSURLRequest;

@interface YQLRequest : NSObject <NSURLSessionDataDelegate> {
    NSURLSession *_defaultSession;
    NSURLSessionTask *_dataTask;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldGenerateOfflineData;
+ (void)appendDebugString:(id)a0;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(BOOL)a0;

- (void)cancel;
- (id)init;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (void)dealloc;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)parseData:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)loadRequest:(id)a0;
- (void)failWithError:(id)a0;
- (void)didParseData;
- (id)_yahooDoppelganger_taskForRequest:(id)a0 delegate:(id)a1;
- (id)taskForRequest:(id)a0 delegate:(id)a1;
- (void)cancelAndInvalidate;
- (id)YQLLanguageCode;
- (id)YQLCountryCode;
- (void)failToParseWithData:(id)a0;
- (void)failToParseWithDataSeriesDictionary:(id)a0;
- (void)_createDefaultSession;
- (void)_loadDefaultSessionIfNeeded;

@end
