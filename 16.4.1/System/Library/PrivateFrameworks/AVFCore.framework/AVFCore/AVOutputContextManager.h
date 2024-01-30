@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {
    AVOutputContextManagerInternal *_ivars;
}

+ (id)outputContextManagerForAllOutputContexts;

- (void)dealloc;
- (void)outputContextManagerImpl:(id)a0 observedFailureToConnectToOutputDevice:(id)a1 reason:(id)a2;
- (void)outputContextManagerImplDidExpireWithReplacementImpl:(id)a0;
- (id)initWithOutputContextManagerImpl:(id)a0;

@end
