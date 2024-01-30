@class ICStoreURLRequest, ICMusicAccountNotificationsSettingsResponse, NSDictionary, ICStoreRequestContext, NSObject;
@protocol OS_dispatch_queue;

@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    ICMusicAccountNotificationsSettingsResponse *_response;
    long long _requestMethod;
    NSDictionary *_bodyDictionary;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 withRequestMethod:(long long)a1;
- (id)initWithRequestContext:(id)a0 withRequestMethod:(long long)a1 andBodyDictionary:(id)a2;

@end
