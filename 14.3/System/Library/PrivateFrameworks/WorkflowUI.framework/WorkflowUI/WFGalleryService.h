@class NSString, ICApp, WFAccessResource, WFImage;

@interface WFGalleryService : NSObject

@property (readonly, nonatomic) ICApp *app;
@property (readonly, nonatomic) WFAccessResource *accessResource;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFImage *icon;

+ (id)serviceWithApp:(id)a0;
+ (id)serviceWithAccessResource:(id)a0;
+ (id)servicesForWorkflow:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)loadIconWithCompletionHandler:(id /* block */)a0;

@end
