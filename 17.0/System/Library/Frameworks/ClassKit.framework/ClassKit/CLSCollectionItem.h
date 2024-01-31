@class NSString;

@interface CLSCollectionItem : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *referenceObjectID;
@property (nonatomic) unsigned long long displayOrder;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithHandout:(id)a0;
- (id)initWithQuestionStep:(id)a0;

@end
