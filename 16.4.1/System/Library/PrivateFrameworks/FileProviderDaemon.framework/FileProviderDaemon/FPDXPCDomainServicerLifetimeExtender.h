@class NSString;

@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing>

@property int requestEffectivePID;
@property (retain) NSString *prettyDescription;
@property (copy, nonatomic) id /* block */ stopBlock;
@property (readonly) double timeout;
@property unsigned long long timeoutState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopExtendingLifetime;
- (void).cxx_destruct;

@end
