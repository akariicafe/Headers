@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject

@property (nonatomic) BOOL isGranted;
@property (retain, nonatomic) ACDClient *client;
@property (retain, nonatomic) NSSet *grantedPermissions;
@property (copy, nonatomic) NSDictionary *options;

- (id)initForClient:(id)a0;
- (void).cxx_destruct;

@end
