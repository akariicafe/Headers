@class CATTransport;

@interface CRKTransportPreflightResultObject : NSObject

@property (retain, nonatomic) CATTransport *transport;
@property (readonly, nonatomic) BOOL shouldResetBackoff;

- (void).cxx_destruct;
- (void)dealloc;
- (id)takeTransport;
- (id)initWithTransport:(id)a0 shouldResetBackoff:(BOOL)a1;

@end
