@class NSString;

@interface WDClinicalGatewayProxy : NSObject

@property (readonly, copy, nonatomic) NSString *gatewayID;
@property (readonly, copy, nonatomic) NSString *batchID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGatewayID:(id)a0 batchID:(id)a1;

@end
