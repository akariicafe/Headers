@class NSString, BSServiceQuality, BSServiceInterface;

@interface CHSChronoEventServiceSpecification : NSObject

@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) BSServiceQuality *serviceQuality;
@property (class, readonly, nonatomic) BSServiceInterface *interface;

@end
