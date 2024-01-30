@class CHIPAccessoryServer;

@interface CHIPAccessoryServerBuilder : HMFObject

@property (retain, nonatomic) CHIPAccessoryServer *accessoryServer;

- (id)addService:(id)a0;
- (id)name:(id)a0;
- (id)identifier:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)category:(id)a0;
- (id)initWithKeystore:(id)a0 browser:(id)a1;
- (id)nodeID:(id)a0;
- (id)vendorID:(id)a0;
- (id)productID:(id)a0;
- (id)manufacturer:(id)a0;
- (id)model:(id)a0;
- (id)serialNumber:(id)a0;
- (id)setUpPinCode:(id)a0;
- (id)discriminator:(id)a0;

@end
