@class NSString, NSMutableArray;

@interface TRINamespaceInfo : TRIPBMessage

@property (copy, nonatomic) NSString *namespaceId;
@property (nonatomic) BOOL hasNamespaceId;
@property (nonatomic) int projectOwner;
@property (nonatomic) BOOL hasProjectOwner;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) BOOL hasDeploymentEnvironment;
@property (nonatomic) BOOL isServerCoordinated;
@property (nonatomic) BOOL hasIsServerCoordinated;
@property (retain, nonatomic) NSMutableArray *compatibilityVersionArray;
@property (readonly, nonatomic) unsigned long long compatibilityVersionArray_Count;

+ (id)descriptor;

@end
