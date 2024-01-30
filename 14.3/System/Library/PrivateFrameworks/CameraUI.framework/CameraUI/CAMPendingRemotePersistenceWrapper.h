@class NSMutableDictionary, CAMCaptureRequest, NSString, NSDate;

@interface CAMPendingRemotePersistenceWrapper : NSObject

@property (readonly, nonatomic) CAMCaptureRequest *request;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSMutableDictionary *job;
@property (readonly, copy, nonatomic) NSString *loggingIdentifier;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 creationDate:(id)a1 job:(id)a2 loggingIdentifier:(id)a3 completionHandler:(id /* block */)a4;

@end
