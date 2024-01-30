@class NSObject, NSPersistentHTTPCookie2Storage, NSMemoryHTTPCookie2Storage;
@protocol OS_dispatch_queue;

@interface NSHTTPCookie2Storage : NSObject {
    NSPersistentHTTPCookie2Storage *persistentStore;
    NSMemoryHTTPCookie2Storage *memoryStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    id /* block */ _defaultNotificationHandler;
}

+ (id)sharedNSHTTPCookie2Storage;

- (id)initWithPath:(id)a0;
- (void)getCookiesWithFilter:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCookie:(id)a0 withFilter:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCookies:(id)a0 withFilter:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteAllCookiesWithCompletionHandler:(id /* block */)a0;
- (void)deleteCookiesWithFilter:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCookie:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getAllCookiesWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)initInNSMemoryHTTPCookie2Storage;
- (void).cxx_destruct;
- (id)initWithIdentifyingData:(id)a0;
- (id)identifyingData;

@end
