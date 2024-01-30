@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext *_context;
}

@property (nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;
@property (readonly) SSSoftwareUpdatesContext *updateQueueContext;

- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (BOOL)start;
- (id)initWithUpdateQueueContext:(id)a0;
- (void)startWithUpdatesResponseBlock:(id /* block */)a0;

@end
