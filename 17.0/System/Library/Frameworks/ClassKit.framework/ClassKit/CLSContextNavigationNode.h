@class NSString;

@interface CLSContextNavigationNode : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *childObjectID;

+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)objectIDForParentContextID:(id)a0 andChildContextID:(id)a1;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithParentContextID:(id)a0 childContextID:(id)a1;

@end
