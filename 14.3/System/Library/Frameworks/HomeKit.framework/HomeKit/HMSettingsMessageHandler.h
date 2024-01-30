@class _HMContext;

@interface HMSettingsMessageHandler : NSObject

@property (retain) _HMContext *context;

- (void).cxx_destruct;
- (void)sendUpdateValueMessage:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
