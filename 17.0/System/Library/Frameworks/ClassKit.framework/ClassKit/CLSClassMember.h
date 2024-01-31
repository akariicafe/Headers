@class NSString;

@interface CLSClassMember : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *personID;
@property (nonatomic) unsigned long long roles;
@property (nonatomic) BOOL markedForDeletion;

+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)objectIDForClassID:(id)a0 andPersonID:(id)a1;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithClassID:(id)a0 personID:(id)a1 roles:(unsigned long long)a2;

@end
