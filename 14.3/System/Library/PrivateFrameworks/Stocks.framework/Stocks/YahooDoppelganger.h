@class NSURLSession, NSString, NSData, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface YahooDoppelganger : NSObject {
    unsigned long long _responseOffset;
    BOOL _cancelled;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
}

@property (retain, nonatomic) NSString *expectedRequestPattern;
@property (retain, nonatomic) NSData *response;
@property (nonatomic) unsigned long long responseChunkSize;
@property (nonatomic) unsigned long long responseChunkDelay;
@property (nonatomic) unsigned long long responseChunkInitialDelay;
@property (weak, nonatomic) id<NSURLSessionDataDelegate> delegate;

+ (BOOL)canHandleRequest:(id)a0;
+ (void)hookIntoYQLRequestIfNeeded;
+ (id)newDoppelgangerMatchingRequestPattern:(id)a0;
+ (void)_spewDoppelgangerArray:(id)a0 named:(id)a1;
+ (void)_doppelgangerFinished:(id)a0;
+ (void)setTestHarness:(id)a0;
+ (id)prepDoppelgangerWithRequestPattern:(id)a0 response:(id)a1;
+ (id)prepDoppelgangerForQuotesResponseWithSymbols:(id)a0 includeMetdata:(BOOL)a1;
+ (id)prepDoppelgangerForNewsResponseWithSymbol:(id)a0 numberOfNewsItems:(long long)a1;
+ (id)prepDoppelgangerForChartResponseWithSymbol:(id)a0 numberOfDataPoints:(long long)a1;
+ (void)spewDoppelgangerData;
+ (void)clearDoppelgangerData;
+ (BOOL)waitForAllDoppelgangersUpToTimeout:(double)a0;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)matchesRequest:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)description;
- (void)start;
- (void)resume;
- (void)_relayDataChunk;

@end
