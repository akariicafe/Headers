@class NSObject, NSOperationQueue, ICFPSAPContext, NSURL, ICStoreRequestContext;
@protocol OS_dispatch_queue;

@interface ICSAPSession : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) NSOperationQueue *_prepareFairPlayContextOperationQueue;
@property (retain, nonatomic, setter=_setSAPContext:) ICFPSAPContext *_sapContext;
@property (readonly, copy, nonatomic) NSURL *_certificateURL;
@property (readonly, copy, nonatomic) ICStoreRequestContext *_requestContext;
@property (readonly, copy, nonatomic) NSURL *_setupURL;
@property (readonly, nonatomic) unsigned int sapVersion;

+ (id)sharedSAPSessionWithVersion:(unsigned int)a0 URLBag:(id)a1 requestContext:(id)a2;

- (void)signData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)verifySignatureData:(id)a0 forData:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_initWithVersion:(unsigned int)a0 certificateURL:(id)a1 setupURL:(id)a2 requestContext:(id)a3;
- (void).cxx_destruct;

@end
