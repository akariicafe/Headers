@class NSString, CATTransport;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate>

@property (readonly, nonatomic) CATTransport *transport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransport:(id)a0;
- (BOOL)isAsynchronous;
- (void)transportDidInvalidate:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end
