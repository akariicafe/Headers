@class NSString;

@interface TRIFactor : TRIPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int namespaceId;
@property (nonatomic) BOOL hasNamespaceId;
@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) BOOL hasNamespaceName;

+ (id)descriptor;

- (BOOL)isInNamespaceName:(id)a0;
- (id)namespaceString;
- (id)typeString;
- (BOOL)hasNamespace;

@end
