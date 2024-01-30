@class NSURLSession, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUXMLRPCClient : NSObject <NSURLSessionDelegate> {
    NSMutableDictionary *_tasks;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSURLSession *_urlSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_activate;
- (void)activate;
- (void)_invalidate;
- (void)requestURL:(id)a0 methodName:(id)a1 params:(id)a2 httpHeaders:(id)a3 identifier:(id *)a4 responseHandler:(id /* block */)a5;
- (void)_requestURL:(id)a0 methodName:(id)a1 params:(id)a2 httpHeaders:(id)a3 identifier:(id)a4 responseHandler:(id /* block */)a5;
- (void)_handleResponse:(id)a0 data:(id)a1 error:(id)a2 identifier:(id)a3 responseHandler:(id /* block */)a4;
- (void)invalidate;

@end
