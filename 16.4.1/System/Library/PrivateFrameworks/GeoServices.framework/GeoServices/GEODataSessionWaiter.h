@class GEODataSessionTask, NSString, GEODataSession;

@interface GEODataSessionWaiter : NSObject <GEOCancellable, GEODataSessionTaskDelegate> {
    id _strongReferenceToSelf;
}

@property (retain, nonatomic) GEODataSession *session;
@property (retain, nonatomic) GEODataSessionTask *task;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dataSession:(id)a0 didCompleteTask:(id)a1;
- (id)initWithSession:(id)a0 request:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
