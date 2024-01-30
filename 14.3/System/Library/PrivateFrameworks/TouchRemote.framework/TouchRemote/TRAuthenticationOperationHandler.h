@class TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler, NSString;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler>

@property (retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler;
@property (retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
