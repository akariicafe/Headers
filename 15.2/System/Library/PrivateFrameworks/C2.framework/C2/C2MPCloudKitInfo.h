@class NSString, NSMutableArray;

@interface C2MPCloudKitInfo : PBCodable <NSCopying> {
    struct { unsigned char reportClientOperationFrequency : 1; unsigned char reportClientOperationFrequencyBase : 1; unsigned char reportOperationGroupFrequency : 1; unsigned char reportOperationGroupFrequencyBase : 1; unsigned char anonymous : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientProcessVersion;
@property (retain, nonatomic) NSString *clientProcessVersion;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) BOOL hasContainer;
@property (retain, nonatomic) NSString *container;
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (retain, nonatomic) NSString *environment;
@property (nonatomic) BOOL hasAnonymous;
@property (nonatomic) BOOL anonymous;
@property (readonly, nonatomic) BOOL hasContainerScopedUserIdentifier;
@property (retain, nonatomic) NSString *containerScopedUserIdentifier;
@property (readonly, nonatomic) BOOL hasContainerScopedDeviceIdentifier;
@property (retain, nonatomic) NSString *containerScopedDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifierOverrideForContainerAccess;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifierOverrideForNetworkAttribution;
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) BOOL hasDatabaseScope;
@property (retain, nonatomic) NSString *databaseScope;
@property (retain, nonatomic) NSMutableArray *operationGroups;
@property (nonatomic) BOOL hasReportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) BOOL hasReportOperationGroupFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (retain, nonatomic) NSMutableArray *clientOperations;
@property (nonatomic) BOOL hasReportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) BOOL hasReportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;

+ (Class)operationGroupType;
+ (Class)clientOperationType;

- (id)operationGroupAtIndex:(unsigned long long)a0;
- (void)clearClientOperations;
- (void)clearOperationGroups;
- (void)addClientOperation:(id)a0;
- (void)addOperationGroup:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)operationGroupsCount;
- (unsigned long long)clientOperationsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)clientOperationAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
