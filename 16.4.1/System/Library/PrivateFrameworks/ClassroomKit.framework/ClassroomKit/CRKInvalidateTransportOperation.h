@class NSString, CATTransport;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate>

@property (readonly, nonatomic) CATTransport *transport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)initWithTransport:(id)a0;
- (BOOL)isAsynchronous;
- (void)transportDidInvalidate:(id)a0;
- (void).cxx_destruct;

@end
