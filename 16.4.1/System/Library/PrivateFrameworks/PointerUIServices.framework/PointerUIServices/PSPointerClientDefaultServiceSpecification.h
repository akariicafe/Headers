@class NSString, BSServiceInterface, BSServiceQuality;

@interface PSPointerClientDefaultServiceSpecification : NSObject

@property (class, readonly, copy) NSString *machName;
@property (class, readonly, copy) NSString *serviceName;
@property (class, readonly, copy) NSString *domainName;
@property (class, readonly, copy, nonatomic) BSServiceInterface *interface;
@property (class, readonly, copy, nonatomic) BSServiceQuality *serviceQuality;

@end
