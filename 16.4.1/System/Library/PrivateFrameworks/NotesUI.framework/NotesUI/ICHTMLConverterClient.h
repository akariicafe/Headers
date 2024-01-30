@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICHTMLConverterClient : NSObject {
    NSXPCConnection *_connectionToService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue;
@property (nonatomic) unsigned long long requestCount;

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)attributedStringFromHTMLString:(id)a0;
- (void)attributedStringFromHTMLString:(id)a0 baseURL:(id)a1 timeoutDate:(id)a2 completionBlock:(id /* block */)a3;
- (void)resumeConnectionIfNeeded;
- (void)suspendConnectionIfNeeded;

@end
