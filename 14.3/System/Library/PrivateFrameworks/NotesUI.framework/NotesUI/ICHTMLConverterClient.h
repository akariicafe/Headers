@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICHTMLConverterClient : NSObject {
    NSXPCConnection *_connectionToService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue;
@property (nonatomic) unsigned long long requestCount;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)attributedStringFromHTMLString:(id)a0 baseURL:(id)a1 timeoutDate:(id)a2 completionBlock:(id /* block */)a3;
- (id)attributedStringFromHTMLString:(id)a0;
- (void)resumeConnectionIfNeeded;
- (void)suspendConnectionIfNeeded;

@end
