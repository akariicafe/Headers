@class NSString, _DKObject;

@interface _DKRelation : _DKObject

@property (readonly) NSString *verbPhrase;
@property (readonly) _DKObject *subject;
@property (readonly) _DKObject *object;

+ (id)entityName;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (BOOL)supportsSecureCoding;
+ (id)relationWithSubject:(id)a0 verbPhrase:(id)a1 object:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSubject:(id)a0 verbPhrase:(id)a1 object:(id)a2;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (id)stringValue;
- (void)encodeWithCoder:(id)a0;

@end
