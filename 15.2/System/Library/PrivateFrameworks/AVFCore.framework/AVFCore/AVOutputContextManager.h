@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {
    AVOutputContextManagerInternal *_ivars;
}

+ (id)outputContextManagerForAllOutputContexts;

- (id)initWithOutputContextManagerImpl:(id)a0;
- (void)outputContextManagerImplDidExpireWithReplacementImpl:(id)a0;
- (void)dealloc;
- (void)outputContextManagerImpl:(id)a0 observedFailureToConnectToOutputDevice:(id)a1 reason:(id)a2;

@end
