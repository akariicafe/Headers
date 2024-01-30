@class NSString, _DKObject;

@interface _DKRelation : _DKObject

@property (readonly) NSString *verbPhrase;
@property (readonly) _DKObject *subject;
@property (readonly) _DKObject *object;

+ (id)entityName;
+ (BOOL)supportsSecureCoding;
+ (id)relationWithSubject:(id)a0 verbPhrase:(id)a1 object:(id)a2;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (id)stringValue;
- (void)encodeWithCoder:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSubject:(id)a0 verbPhrase:(id)a1 object:(id)a2;
- (id)initWithCoder:(id)a0;

@end
