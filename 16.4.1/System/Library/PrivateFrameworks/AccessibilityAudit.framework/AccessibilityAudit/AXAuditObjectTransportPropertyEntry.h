@class NSString;

@interface AXAuditObjectTransportPropertyEntry : NSObject

@property (retain, nonatomic) NSString *transportKey;
@property (copy, nonatomic) id /* block */ localValueToTransportValue;
@property (copy, nonatomic) id /* block */ populateLocalObjectWithTransportValue;

- (void).cxx_destruct;

@end
