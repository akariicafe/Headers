@class NSString;

@interface HMDPendingSocketRequest : NSObject

@property (readonly) NSString *applicationProtocolName;
@property (readonly) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithApplicationProtocolName:(id)a0 completion:(id /* block */)a1;

@end
