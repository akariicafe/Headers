@class NSData, NSString;

@interface CBControllerInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *hardwareAddressData;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (nonatomic) unsigned int supportedServices;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
