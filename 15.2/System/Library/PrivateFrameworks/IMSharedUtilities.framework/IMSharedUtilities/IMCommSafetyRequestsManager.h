@class NSObject, NSMutableDictionary, MADService;
@protocol OS_dispatch_queue;

@interface IMCommSafetyRequestsManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) MADService *service;
@property (retain, nonatomic) NSMutableDictionary *cachedResults;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)_identifierForURL:(id)a0 withChatID:(id)a1;
- (void)_setSensitiveValue:(BOOL)a0 forIdentifier:(id)a1;
- (void)_dispatchMADProcessingRequest:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;
- (void)isSensitiveImage:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;
- (id)cachedResultForImage:(id)a0 withChatID:(id)a1;
- (void)dealloc;

@end
