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

- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (BOOL)start;
- (void)startWithPlayInfoResponseBlock:(id /* block */)a0;
- (id)initWithPlayInfoContext:(id)a0;

@end
