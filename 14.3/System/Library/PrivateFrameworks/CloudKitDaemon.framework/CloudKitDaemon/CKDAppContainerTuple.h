@class CKContainerID, CKDApplicationID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>

@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (readonly, nonatomic) CKDApplicationID *applicationID;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) NSString *applicationContainerPath;
@property (readonly, nonatomic) NSString *personaID;
@property (nonatomic) BOOL useZoneWidePCS;
@property (nonatomic) BOOL bypassPCSEncryption;
@property (nonatomic) BOOL forceEnableReadOnlyManatee;
@property (retain, nonatomic) NSString *containerEncryptionServiceName;
@property (nonatomic) BOOL wantsSiloedContext;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationID:(id)a0 containerID:(id)a1 personaID:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (id)initWithApplicationID:(id)a0 applicationContainerPath:(id)a1 containerID:(id)a2 personaID:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationBundleID:(id)a0 containerID:(id)a1 personaID:(id)a2;

@end
