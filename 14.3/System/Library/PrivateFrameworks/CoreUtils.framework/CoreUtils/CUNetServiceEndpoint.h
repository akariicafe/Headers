@class CUBonjourDevice, NSString, NSDictionary, CUNANEndpoint;

@interface CUNetServiceEndpoint : NSObject

@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (retain, nonatomic) CUNANEndpoint *nanEndpoint;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo;
@property (copy, nonatomic) NSString *serviceType;

- (unsigned int)updateWithBonjourDevice:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)a0;
- (unsigned int)updateWithNANEndpoint:(id)a0;

@end
