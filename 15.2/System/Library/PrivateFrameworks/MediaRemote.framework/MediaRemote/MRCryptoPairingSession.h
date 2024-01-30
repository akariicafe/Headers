@class NSArray, MRDeviceInfo;
@protocol MRCryptoPairingSessionDelegate;

@interface MRCryptoPairingSession : NSObject

@property (readonly, nonatomic) MRDeviceInfo *device;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSArray *pairedDevices;
@property (weak, nonatomic) id<MRCryptoPairingSessionDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)close;
- (id)encryptData:(id)a0 withError:(id *)a1;
- (void)handlePairingFailureWithStatus:(int)a0;
- (void)handlePairingExchangeData:(id)a0 completion:(id /* block */)a1;
- (id)decryptData:(id)a0 withError:(id *)a1;
- (BOOL)deleteIdentityWithError:(id *)a0;
- (void)open;
- (id)initWithRole:(unsigned long long)a0 device:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)removePeer;
- (id)updatePeer;

@end
