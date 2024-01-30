@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext *_context;
}

@property (nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;
@property (readonly) SSSoftwareUpdatesContext *updateQueueContext;

- (void)startWithUpdatesResponseBlock:(id /* block */)a0;
- (id)initWithUpdateQueueContext:(id)a0;
- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;

@end
