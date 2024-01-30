@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) int entityID;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;

- (id)URIRepresentation;
- (id)entityName;
- (id)initWithEntityType:(int)a0 entityID:(int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
