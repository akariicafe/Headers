@class SOAuthorizationRequestParameters;
@protocol SOServiceProtocol;

@interface SORequestQueueItem : NSObject

@property (readonly, nonatomic) id<SOServiceProtocol> service;
@property (readonly, nonatomic) SOAuthorizationRequestParameters *requestParameters;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)description;
- (id)initWithService:(id)a0 requestParameters:(id)a1 completionBlock:(id /* block */)a2;

@end
