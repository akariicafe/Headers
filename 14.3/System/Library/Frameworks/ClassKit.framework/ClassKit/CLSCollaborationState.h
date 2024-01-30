@class NSString, NSURL, NSDictionary;

@interface CLSCollaborationState : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *ownerPersonID;
@property (nonatomic) long long domain;
@property (nonatomic) long long domainVersion;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSString *parentEntityName;
@property (copy, nonatomic) NSString *senderPersonID;
@property (copy, nonatomic) NSString *recipientPersonID;
@property (copy, nonatomic) NSString *serverETag;
@property (copy, nonatomic) NSString *serverExecutionID;
@property (nonatomic) long long serverStatus;

+ (id)relations;
+ (BOOL)supportsSecureCoding;
+ (id)identifierForTargetObjectID:(id)a0 ownerPersonID:(id)a1 domain:(long long)a2;
+ (id)supportedInfoDictionaryClasses;

- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (BOOL)hasServerMetadata;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initForObjectWithID:(id)a0 targetClass:(Class)a1 ownerPersonID:(id)a2 domain:(long long)a3 state:(long long)a4 flags:(unsigned long long)a5;
- (id)friendlyDomainRepresentation;
- (id)friendlyStateRepresentation;
- (id)friendlyFlagsRepresentation;
- (id)initForObject:(id)a0 ownerPersonID:(id)a1 domain:(long long)a2 state:(long long)a3 flags:(unsigned long long)a4;

@end
