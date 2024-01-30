@class NSObject, NSMutableDictionary, MADService;
@protocol OS_dispatch_queue;

@interface IMCommSafetyRequestsManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) MADService *service;
@property (retain, nonatomic) NSMutableDictionary *cachedResults;

+ (void)initialize;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)cachedResultForImage:(id)a0 withChatID:(id)a1;
- (void)isSensitiveImage:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_dispatchMADProcessingRequest:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_identifierForURL:(id)a0 withChatID:(id)a1;
- (void)_setSensitiveValue:(BOOL)a0 forIdentifier:(id)a1;
- (void)isSensitiveCGImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 completionHandler:(id /* block */)a2;

@end
