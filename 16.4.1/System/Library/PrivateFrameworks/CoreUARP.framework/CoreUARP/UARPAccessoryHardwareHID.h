@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;

@end
