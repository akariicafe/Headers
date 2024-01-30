@class SADeviceCarDNDHintContext;
@protocol SiriUICarDNDContextProviderDelegate;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider>

@property (weak, nonatomic) id<SiriUICarDNDContextProviderDelegate> delegate;
@property (copy, nonatomic, setter=_setHintContext:) SADeviceCarDNDHintContext *hintContext;

- (BOOL)allowContextProvider:(id)a0;
- (id)getCurrentContext;
- (void).cxx_destruct;

@end
