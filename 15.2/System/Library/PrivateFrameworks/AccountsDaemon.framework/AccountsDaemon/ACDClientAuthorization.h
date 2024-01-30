@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject

@property (nonatomic) BOOL isGranted;
@property (retain, nonatomic) ACDClient *client;
@property (retain, nonatomic) NSSet *grantedPermissions;
@property (copy, nonatomic) NSDictionary *options;

- (void).cxx_destruct;
- (id)initForClient:(id)a0;

@end
