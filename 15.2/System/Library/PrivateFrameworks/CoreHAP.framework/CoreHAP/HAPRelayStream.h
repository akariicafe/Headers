@protocol HAPStreamDelegate;

@interface HAPRelayStream : HMFObject

@property (weak) id<HAPStreamDelegate> delegate;
@property (readonly, nonatomic) unsigned long long mtu;

- (id)writeData:(id)a0 error:(id *)a1;
- (void)close;
- (void)open;
- (void).cxx_destruct;

@end
