@class NSString;

@interface CLSClassMember : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *personID;
@property (nonatomic) unsigned long long roles;
@property (nonatomic) BOOL markedForDeletion;

+ (id)relations;
+ (BOOL)supportsSecureCoding;
+ (id)objectIDForClassID:(id)a0 andPersonID:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClassID:(id)a0 personID:(id)a1 roles:(unsigned long long)a2;

@end
