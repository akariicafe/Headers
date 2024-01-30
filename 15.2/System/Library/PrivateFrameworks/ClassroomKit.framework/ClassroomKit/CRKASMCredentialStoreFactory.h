@class CRKASMCredentialStore;

@interface CRKASMCredentialStoreFactory : NSObject

@property (class, readonly, nonatomic) CRKASMCredentialStore *studentCredentialStore;
@property (class, readonly, nonatomic) CRKASMCredentialStore *instructorCredentialStore;

+ (id)makeCredentialStoreWithRole:(id)a0;
+ (id)storageKeyWithRole:(id)a0 suffix:(id)a1;

@end
