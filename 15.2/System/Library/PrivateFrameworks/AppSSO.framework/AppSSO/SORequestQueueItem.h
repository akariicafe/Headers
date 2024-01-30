@class NSString, SOAuthorizationRequestParameters;
@protocol SOServiceProtocol;

@interface SORequestQueueItem : NSObject <SOQueueItem>

@property (readonly, nonatomic) id<SOServiceProtocol> service;
@property (readonly, nonatomic) SOAuthorizationRequestParameters *requestParameters;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 requestParameters:(id)a1 completionBlock:(id /* block */)a2;

@end
