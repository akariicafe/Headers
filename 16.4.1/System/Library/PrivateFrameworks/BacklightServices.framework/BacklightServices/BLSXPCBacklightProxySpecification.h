@class NSString, BSServiceQuality, BSServiceInterface;

@interface BLSXPCBacklightProxySpecification : NSObject

@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, copy, nonatomic) BSServiceQuality *serviceQuality;
@property (class, readonly, copy, nonatomic) BSServiceInterface *interface;

@end
