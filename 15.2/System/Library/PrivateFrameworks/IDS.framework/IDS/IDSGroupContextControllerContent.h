@class ENGroupContext, ENAccountIdentity, IDSCloudKitContainer;

@interface IDSGroupContextControllerContent : NSObject

@property (retain, nonatomic) IDSCloudKitContainer *cloudKitContainer;
@property (retain, nonatomic) ENGroupContext *groupContext;
@property (retain, nonatomic) ENAccountIdentity *accountIdentity;

- (void).cxx_destruct;

@end
