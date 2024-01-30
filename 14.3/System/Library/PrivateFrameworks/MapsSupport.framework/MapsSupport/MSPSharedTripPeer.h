@interface MSPSharedTripPeer : NSObject

@property (readonly, nonatomic) BOOL canControlSharing;
@property (readonly, nonatomic) BOOL canControlReceiving;

- (id)initWithConnection:(id)a0;

@end
