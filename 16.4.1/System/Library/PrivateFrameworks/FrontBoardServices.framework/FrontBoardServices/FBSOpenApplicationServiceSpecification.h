@class NSString, BSServiceQuality, BSServiceInterface;

@interface FBSOpenApplicationServiceSpecification : NSObject

@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, copy, nonatomic) BSServiceQuality *serviceQuality;
@property (class, readonly, copy, nonatomic) BSServiceInterface *interface;

- (id)init;

@end
