@class SSPlayInfoResponse, NSString, SSPlayInfoRequestContext;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}

@property (nonatomic) id<SSPlayInfoRequestDelegate> delegate;
@property (readonly) SSPlayInfoRequestContext *playInfoContext;
@property (readonly) SSPlayInfoResponse *playInfoResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayInfoContext:(id)a0;
- (void)startWithPlayInfoResponseBlock:(id /* block */)a0;
- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;

@end
