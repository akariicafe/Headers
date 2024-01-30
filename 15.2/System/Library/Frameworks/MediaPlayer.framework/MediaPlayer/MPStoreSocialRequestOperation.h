@class ICStoreURLRequest, NSObject;
@protocol OS_dispatch_queue, MPStoreSocialRequestOperationDataSource;

@interface MPStoreSocialRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_request;
}

@property (readonly, nonatomic) id<MPStoreSocialRequestOperationDataSource> dataSource;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)_urlStringForKey:(id)a0 inBag:(id)a1;
+ (id)_stringRepresentationForHTTPBodyType:(long long)a0;
+ (id)_stringRepresentationForHTTPMethod:(long long)a0;

- (void)execute;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)_requestURLFromBagDictionary:(id)a0;
- (void)cancel;

@end
