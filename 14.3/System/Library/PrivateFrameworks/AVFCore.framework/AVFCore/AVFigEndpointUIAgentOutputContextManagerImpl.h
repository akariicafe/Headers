@class NSString, AVOutputContextManager, AVWeakReference;

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl> {
    struct OpaqueFigEndpointUIAgent { } *_agent;
    AVWeakReference *_weakObserver;
}

@property (weak) AVOutputContextManager *parentOutputContextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct OpaqueFigEndpointUIAgent { } *)copySharedEndpointUIAgent;

@end
