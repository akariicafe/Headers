@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject

@property (readonly, nonatomic) CAMCaptureRequest *request;
@property (readonly, nonatomic) id result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 result:(id)a1 completionHandler:(id /* block */)a2;

@end
