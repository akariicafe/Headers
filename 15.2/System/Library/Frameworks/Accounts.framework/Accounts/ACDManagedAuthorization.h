@class NSString, ACDManagedAccountType;

@interface ACDManagedAuthorization : NSManagedObject

@property (retain, nonatomic) id options;
@property (retain, nonatomic) NSString *grantedPermissions;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) ACDManagedAccountType *accountType;

@end
