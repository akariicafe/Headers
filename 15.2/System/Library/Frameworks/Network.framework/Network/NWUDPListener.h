@class NWParameters, NWEndpoint, NSObject, NSError;
@protocol NWUDPListenerDelegate, OS_nw_listener;

@interface NWUDPListener : NSObject

@property (retain) NSObject<OS_nw_listener> *internalListener;
@property (retain) NWParameters *parameters;
@property (retain) NWEndpoint *endpoint;
@property (weak) id<NWUDPListenerDelegate> delegate;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NWEndpoint *localEndpoint;

- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0 delegate:(id)a1;
- (void)handleConnection:(id)a0;

@end
