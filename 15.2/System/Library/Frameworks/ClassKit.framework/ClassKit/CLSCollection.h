@class NSString, NSDate;

@interface CLSCollection : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDate *dateClassCreated;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *iconID;
@property (copy, nonatomic) NSString *colorName;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)children;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)childCount;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:(id *)a0;
- (id)initWithObjectID:(id)a0 name:(id)a1 location:(id)a2 type:(long long)a3 icon:(id)a4;
- (unsigned long long)childCount:(long long)a0;
- (id)children:(long long)a0;
- (void)addCollectionItem:(id)a0;
- (void)removeCollectionItem:(id)a0;

@end
